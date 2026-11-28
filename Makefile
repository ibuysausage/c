CFLAGS = -Wall -Wextra -g
CC = -std=c99
FILES = main name vol-area main guess avg
RAYFLAGS = -lraylib -lGL -lm -lpthread -ldl -lrt -lX11

all: $(FILES)

clean:
	rm -rf $(FILES)

name: name.c
	gcc -o name name.c $(CC) $(CFLAGS)

avg: avg.c
	gcc -o avg avg.c $(CC) $(CFLAGS)

vol-area: vol-area.c
	gcc -o vol-area vol-area.c $(CC) $(CFLAGS)

guess: guess.c
	gcc -o guess guess.c $(CC) $(CFLAGS)

main: main.c
	gcc -o main main.c $(CC) $(CFLAGS) ${RAYFLAGS}
