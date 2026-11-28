CFLAGS = -Wall -Wextra -g
CC = -std=c99
RAYFLAGS = -lraylib -lGL -lm -lpthread -ldl -lrt -lX11

FILES = main avg guess gui ls name vol-area

all: $(FILES)

clean:
	rm -rf $(FILES)

main: main.c
	gcc -o main main.c $(CC) $(CFLAGS)

avg: avg.c
	gcc -o avg avg.c $(CC) $(CFLAGS)

guess: guess.c
	gcc -o guess guess.c $(CC) $(CFLAGS)

gui: gui.c
	gcc -o gui gui.c $(CC) $(CFLAGS) $(RAYFLAGS)

ls: ls.c
	gcc -o ls ls.c $(CC) $(CFLAGS)

name: name.c
	gcc -o name name.c $(CC) $(CFLAGS)

vol-area: vol-area.c
	gcc -o vol-area vol-area.c $(CC) $(CFLAGS)
