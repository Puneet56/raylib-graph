main: main.c
	gcc -o main -Wall -Wextra -pedantic $$(pkg-config --cflags --libs raylib) -I./stb_perlin.h main.c

