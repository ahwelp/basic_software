#include <stdio.h>
#include <stdlib.h>

struct array {
  double *p_d;
  int max;
};

struct array *array_create () {
  struct array *p_a;
  p_a = malloc (sizeof (struct array));
  if (p_a == NULL) {
    printf ("out of memory\n");
    exit (1);
  }
  p_a->max = 10;
  p_a->p_d = calloc (p_a->max, sizeof(double));
  if (p_a->p_d == NULL) {
    printf ("out of memory\n");
    exit (1);
  }
  return p_a;
}

void array_set (struct array *p_a, int i, double v) {
  if ((i >= 0) && (i < p_a->max)) {
    p_a->p_d[i] = v;
  } else {
    printf("index out of range\n");
  }
}

double array_get (struct array *p_a, int i) {
  double v = -1.0;
  if ((i >= 0) && (i < p_a->max)) {
    v = p_a->p_d[i];
  } else {
    printf ("index out of range\n");
  }
  return v;
}

void array_destroy (struct array *p_a) {
  free (p_a->p_d);
  free (p_a);
}

int main () {
  struct array *p_a;
  p_a = array_create ();
  array_set (p_a, 0,  3.1); //ok
  printf ("%g\n", array_get (p_a, 0));
  array_set (p_a, 15, 4.2); // erro
  printf ("%g\n", array_get (p_a, 15));
  array_destroy (p_a);
  return 0;
}
