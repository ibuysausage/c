all: name swap vol main

name: name.c
		gcc -o name name.c -Wall -Wextra

swap: swap.c
		gcc -o swap swap.c -Wall -Wextra

vol: vol-area.c
		gcc -o vol-area vol-area.c -Wall -Wextra

main: main.c
		gcc -o main main.c -Wall -Wextra
