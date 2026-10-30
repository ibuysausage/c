CFLAGS = -std=c99 -Wall -Wextra -g

all: name swap vol main spam guess

clean:
	rm -rf name swap vol-area spam guess main

name: name.c
	gcc -o name name.c $(CFLAGS)

swap: swap.c
	gcc -o swap swap.c $(CFLAGS)

vol: vol-area.c
	gcc -o vol-area vol-area.c $(CFLAGS)

spam: spam.c
	gcc -o spam spam.c $(CFLAGS)

guess: guess.c
	gcc -o guess guess.c $(CFLAGS)

main: main.c
	gcc -o main main.c $(CFLAGS)
