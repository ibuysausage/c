CFLAGS = -Wall -Wextra -g
CC = -std=c99

all: name swap vol main spam guess

clean:
	rm -rf name swap vol-area spam guess main

name: name.c
	gcc -o name name.c $(CC) $(CFLAGS)

swap: swap.c
	gcc -o swap swap.c $(CC) $(CFLAGS)

vol: vol-area.c
	gcc -o vol-area vol-area.c $(CC) $(CFLAGS)

spam: spam.c
	gcc -o spam spam.c $(CC) $(CFLAGS)

guess: guess.c
	gcc -o guess guess.c $(CC) $(CFLAGS)

main: main.c
	gcc -o main main.c $(CC) $(CFLAGS)
