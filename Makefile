CC = gcc
CFLAGS = -std=c99 -Wall -Wextra -g
RAYFLAGS = -lraylib -lGL -lm -lpthread -ldl -lrt -lX11
GTKFLAGS = $(shell pkg-config --cflags --libs gtk4)


FILES = main avg guess gui ls name vol-area

all: $(FILES)

clean:
	rm -rf $(FILES)

main: main.c
	$(CC) -o main main.c $(CFLAGS) $(GTKFLAGS)

avg: avg.c
	$(CC) -o avg avg.c $(CFLAGS)

guess: guess.c
	$(CC) -o guess guess.c $(CFLAGS)

gui: gui.c
	$(CC) -o gui gui.c $(CFLAGS) $(RAYFLAGS)

ls: ls.c
	$(CC) -o ls ls.c $(CFLAGS)

name: name.c
	$(CC) -o name name.c $(CFLAGS)

vol-area: vol-area.c
	$(CC) -o vol-area vol-area.c $(CFLAGS)
