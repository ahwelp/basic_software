#include <stdio.h>
#include <time.h>

struct time {
  int hour;
  int minute;
  int second;
};

void time_init (struct time *p_t, int h, int m, int s) {
  p_t->hour = h;
  p_t->minute = m;
  p_t->second = s;
}

void time_print (struct time *p_t) {
  printf("%02d:%02d:%02d\n", p_t->hour, p_t->minute, p_t->second);
}

struct time time_add (struct time *p_a, struct time *p_b) {
  struct time c;
  c.second = (p_a->second + p_b->second) % 60;
  c.minute = (p_a->minute + p_b->minute + (p_a->second + p_b->second) / 60) % 60;
  c.hour   = (p_a->hour   + p_b->hour   + (p_a->minute + p_b->minute) / 60) % 24;
  return c;
}

int main (void) {
  struct time d, e, f;
  time_init (&d, 13, 12, 7);
  time_print (&d);
  time_init (&e, 12, 52, 53);
  time_print (&e);
  f = time_add (&d, &e);
  time_print (&f);
  return 0;
}
