#include <stdio.h>

extern void display() {
  extern int i;
  printf("i = %d\n", i);
}