#include <stdio.h>

int sum(int num) {
  static int sum = 0;
  sum += num;
  return sum;
}

int main(int argc, char **argv) {
  
  for (int i = 0; i < 10; i++) {
    printf("Sum of first %d numbers is %d\n", i, sum(i));
  }

  return 0;
}

