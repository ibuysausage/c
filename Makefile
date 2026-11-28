CFLAGS = -Wall -Wextra -g
CC = -std=c99
FILES = main avg gui guess name vol-area
RAYFLAGS = -lraylib -lGL -lm -lpthread -ldl -lrt -lX11

all: $(FILES)

clean:
	rm -rf $(FILES)

main: main.c
	gcc -o main main.c $(CC) $(CFLAGS)

avg: avg.c
	gcc -o avg avg.c $(CC) $(CFLAGS)

gui: gui.c
	gcc -o gui gui.c $(CC) $(CFLAGS) $(RAYFLAGS)
guess: guess.c
	gcc -o guess guess.c $(CC) $(CFLAGS)

name: name.c
	gcc -o name name.c $(CC) $(CFLAGS)

vol-area: vol-area.c
	gcc -o vol-area vol-area.c $(CC) $(CFLAGS)
