#include <stdlib.h>
#include <assert.h>
#include "a4.h"

#define RANDOM(max_color) (rand() % (max_color + 1))

PIXEL *generate_random_image(int width, int height, int max_color) {
  PIXEL *image = (PIXEL *)malloc(width*height*sizeof(PIXEL));
  assert(image);
  int i;
  for (i = 0; i < width*height; i++) {
    image[i].r = RANDOM(max_color);
    image[i].g = RANDOM(max_color);
    image[i].b = RANDOM(max_color);
  }
  return image;
}

Individual *generate_population(int population_size, int width, int height,
                                int max_color) {
  Individual *population = malloc(population_size * sizeof(Individual));
  assert(population);
  
  // Initialize this population with random images
  int i;
  for (i                = 0; i < population_size; i++)
    {
      population[i].image.data = generate_random_image(width, height, max_color);
      population[i].image.width = width;
      population[i].image.height = height;
      population[i].image.max_color = max_color;
    }
  return population;
}
