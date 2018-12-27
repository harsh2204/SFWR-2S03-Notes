#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

#include "a4.h"

PIXEL* readPPM(const char* file, int* width, int* height, int* max_color);
void writePPM(const char* file, int width, int height, int max_color,
              const PIXEL* image);

PPM_IMAGE* read_ppm(const char* file) {
  PPM_IMAGE* p = malloc(sizeof(PPM_IMAGE));
  p->data      = readPPM(file, &(p->width), &(p->height), &(p->max_color));
  return p;
}

void write_ppm(const char* file, const PPM_IMAGE* image) {
  writePPM(file, image->width, image->height, image->max_color, image->data);
}

void writePPM(const char* file, int width, int height, int max_color,
              const PIXEL* image) {
  int i;

  // open file for writing
  FILE* fd;
  fd = fopen(file, "w");

  // output the header
  fprintf(fd, "P3\n");
  fprintf(fd, "%d %d\n%d\n", width, height, max_color);

  // write the image
  for (i = 0; i < height * width; i++) {
    const PIXEL* p = image + i;
    fprintf(fd, "%d %d %d ", p->r, p->g, p->b);
  }
  fclose(fd);
}

PIXEL* readPPM(const char* file, int* width, int* height, int* max_color) {
  /* Read a PPM P3 image from a file into a buffer.  Return the
     buffer, width, height, and the max_color value in the image. */

  FILE* fd;
  char  c;
  int   i, n;
  char  b[100];
  int   red, green, blue;

  // check if P3 ppm format
  fd = fopen(file, "r");
  n  = fscanf(fd, "%[^\n] ", b);
  if (b[0] != 'P' || b[1] != '3') {
    printf("%s is not a PPM file!\n", file);
    exit(0);
  }
  printf("%s is a PPM file\n", file);
  n = fscanf(fd, "%c", &c);
  while (c == '#') {
    n = fscanf(fd, "%[^\n] ", b);
    printf("%s\n", b);
    n = fscanf(fd, "%c", &c);
  }
  ungetc(c, fd);
  n = fscanf(fd, "%d %d %d", width, height, max_color);
  assert(n == 3);

  printf("%d x %d image, max_color value= %d\n", *width, *height, *max_color);

  // size of image
  int size = *width * (*height);

  PIXEL* image = (PIXEL*)malloc(size * sizeof(PIXEL));
  assert(image);

  for (i = 0; i < size; i++) {
    n = fscanf(fd, "%d %d %d", &red, &green, &blue);
    assert(n == 3);
    image[i].r = red;
    image[i].g = green;
    image[i].b = blue;
  }
  fclose(fd);
  return image;
}
