CC = gcc
CFLAGS = -std=c99 -Wall -Wextra -g

FILES = main avg guess ls name vol-area

all: $(FILES)

clean:
	rm -rf $(FILES)

main: main.c
	$(CC) -o main main.c $(CFLAGS)

avg: avg.c
	$(CC) -o avg avg.c $(CFLAGS)

guess: guess.c
	$(CC) -o guess guess.c $(CFLAGS)

ls: ls.c
	$(CC) -o ls ls.c $(CFLAGS)

name: name.c
	$(CC) -o name name.c $(CFLAGS)

vol-area: vol-area.c
	$(CC) -o vol-area vol-area.c $(CFLAGS)
