CFLAGS = -std=c99 -Wall -Wextra -g

all: name swap vol main spam guess

clean:
	rm -rf name swap vol-area spam guess main

name: name.c
	gcc -o name name.c

swap: swap.c
	gcc -o swap swap.c

vol: vol-area.c
	gcc -o vol-area vol-area.c

spam: spam.c
	gcc -o spam spam.c

guess: guess.c
	gcc -o guess guess.c

main: main.c
	gcc -o main main.c
