#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct myArray {
  int len;
  int arr[];
};

typedef struct myArray myArray_t;

int main(int argc, char **argv) {
  srand(time(NULL));
  myArray_t *arr = NULL;
  int size;
  printf("Enter the size of the array: ");
  scanf("%d", &size);
  arr = (myArray_t *) malloc(sizeof(myArray_t) + size * sizeof(int));
  arr->len = size;
  for (int i = 0; i < size; i++) {
    int random = rand() % 100;
    arr->arr[i] = random;
    printf("Value of arr on index %i is: %d", i, arr->arr[i]);
  }
  
  free(arr);

  return 0;
}
