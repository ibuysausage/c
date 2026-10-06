all: main vol test

vol: vol-area.c
		clang vol-area.c -o vol-area -Wall
test: test.c
		clang test.c -o test -Wall

main: main.c
		clang main.c -o main -Wall

run: all
		./main
