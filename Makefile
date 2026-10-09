all: main vol test num-spam name

name:
		clang name.c -o name -Wall

num-spam:
		clang num-spam.c -o num-spam -Wall

vol: vol-area.c
		clang vol-area.c -o vol-area -Wall
test: test.c
		clang test.c -o test -Wall

main: main.c
		clang main.c -o main -Wall

run: all
		./main
