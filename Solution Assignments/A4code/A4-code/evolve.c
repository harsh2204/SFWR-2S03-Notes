#include <assert.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "a4.h"

void free_image(PPM_IMAGE *p)
{
  free(p->data);
  free(p);
}
static int fitnessCompare(const void *a, const void *b)
{
  return ((*(Individual *)a).fitness - (*(Individual *)b).fitness);
}

PPM_IMAGE *evolve_image(const PPM_IMAGE *orig_image, int num_generations,
                        int population_size, double mutation_rate)
{

  PPM_IMAGE *new_image = malloc(sizeof(PPM_IMAGE));
  *new_image = *orig_image;
  new_image->data = malloc(orig_image->width * orig_image->height * sizeof(PIXEL));

  int width = orig_image->width, height = orig_image->height, max_color = orig_image->max_color;
  int n = width * height;

  // Initial population
  Individual *population =
      generate_population(population_size, width, height, max_color);
  assert(population);

  PIXEL *goal = orig_image->data;
  comp_fitness_population(goal, population, population_size);

  // Sort the individuals/images in non-decreasing value of fitness
  qsort(population, population_size, sizeof(Individual), fitnessCompare);

  int g, i;
  double prev_fitness, current_fitness;
  for (g = 0; g < num_generations; g++)
  {
    prev_fitness = population[0].fitness;
    crossover(population, population_size);
    mutate_population(population, population_size, mutation_rate);
    //  Recompute fitness
    comp_fitness_population(goal, population, population_size);

    // Sort in non-decreasing fitness
    qsort(population, population_size, sizeof(Individual), fitnessCompare);
    current_fitness = population[0].fitness;

    double change = -(current_fitness - prev_fitness) / current_fitness * 100;

    //#ifdef MONITOR
    printf(" generation % 5d fitness %e  change from prev %.2e%c \n", g,
           current_fitness, change, 37);
    //#endif
  }

  // Return the image that is found
  memmove(new_image->data, population[0].image.data, n * sizeof(PIXEL));

  // release memory
  for (i = 0; i < population_size; i++)
    free(population[i].image.data);
  free(population);
  return new_image;
}
