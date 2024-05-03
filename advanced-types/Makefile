CC = gcc
CFLAGS = -g -std=c11 -pedantic -Wall -Wextra

flex_array: flex_array.c
	$(CC) $(CFLAGS) -o $@ flex_array.c

complex_numbers: complex_numbers.c
	$(CC) $(CFLAGS) -o $@ complex_numbers.c -lm

clean:
	rm -f flex_array complex_numbers