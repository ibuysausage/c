all: name swap vol main

name:
		clang name.c -o name -Wall -Wextra

swap:
		clang -o swap swap.c -Wall -Wextra

vol: vol-area.c
		clang vol-area.c -o vol-area -Wall -Wextra

main: main.c
		clang main.c -o main -Wall -Wextra
