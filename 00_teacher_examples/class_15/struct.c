#include <stdio.h>

struct sensor {
  char c;
  int i;
  double d;
};

void sensor_init(struct sensor *p_s) { // passagem por ponteiro
  (*p_s).c = 'R';
  p_s->i   = 0;
  p_s->d   = 1.0;
}

void sensor_print(struct sensor x) { // passagem por cópia
    printf("[%c %d %g]\n", x.c, x.i, x.d);
}

int main (void) {
  struct sensor s;
  sensor_init(&s);
  sensor_print(s);
  printf("sizeof=%ld\n", sizeof(s));
  return 0;
}
