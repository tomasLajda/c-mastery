#include <stdio.h>

int i = 0;

void display();

int main(int argc, char **argv) {
  for(i = 0; i < 5; i++) {
    display();
  }

  return 0;
}
