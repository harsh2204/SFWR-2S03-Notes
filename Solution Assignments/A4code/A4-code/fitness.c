#include <math.h>
#include "a4.h"

// Computes the fitnes of B.

int dist(const PIXEL *x, const PIXEL *y) {
  int r, g, b, f = 0;

  r = x->r;
  r -= y->r;

  g = x->g;
  g -= y->g;

  b = x->b;
  b -= y->b;

  f += r * r;
  f += g * g;
  f += b * b;
  return f;
}

double comp_distance(const PIXEL *A, const PIXEL *B, int n) {
  int    i;
  double f   = 0;
  int    rem = n % 8;
  for (i = 0; i < n - rem; i += 8) {
    f += dist(A++, B++);
    f += dist(A++, B++);
    f += dist(A++, B++);
    f += dist(A++, B++);
    f += dist(A++, B++);
    f += dist(A++, B++);
    f += dist(A++, B++);
    f += dist(A++, B++);
  }

  for (i = n - rem; i < n; i++)
    f += dist(A++, B++);

  return sqrt(f);
}

void comp_fitness_population(const PIXEL *goal, Individual *population,
                             int population_size) {
  int n = population[0].image.width * population[0].image.height;
  for (int i              = 0; i < population_size; i++)
    population[i].fitness = comp_distance(goal, population[i].image.data, n);
}
