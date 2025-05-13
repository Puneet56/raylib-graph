main: main.c
	gcc -o main -Wall -Wextra -pedantic $$(pkg-config --cflags --libs raylib) -Istb_perlin.h main.c
