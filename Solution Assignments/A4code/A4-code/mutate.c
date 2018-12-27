#include <stdlib.h>
#include <stdio.h>
#include "a4.h"

#define RANDOM(max_color)  ( rand() % (max_color + 1) )

void mutate (Individual *p, double rate) 
{
  // Mutate rate/100*n random pixels
  int i,j;
  int n = p->image.width*p->image.height;
  int num_pixels = rate/100*n;
  int max_color = p->image.max_color;
  for(i=0; i < num_pixels; i++) 
    {
      // Pick a pixel number at random.
      j = rand() % n;
      // and modify it
      p->image.data[j].r = RANDOM(max_color);
      p->image.data[j].g = RANDOM(max_color);
      p->image.data[j].b = RANDOM(max_color);
    }
}

void mutate_population(Individual *population, int population_size, double mutation_rate) {

  int mutation_start = population_size / 4;
  for (int i = mutation_start; i < population_size; i++)
    mutate(population + i,  mutation_rate);
}
