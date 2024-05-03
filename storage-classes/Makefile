CC = gcc
CFLAGS = -g -std=c11 -pedantic -Wall -Wextra


static: static.c
	$(CC) $(CFLAGS) -o $@ static.c

main: main.c display.c
	$(CC) $(CFLAGS) -o $@ main.c display.c

clean:
	rm -f static main