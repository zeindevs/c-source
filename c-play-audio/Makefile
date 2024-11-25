all: build run

run:
	@./audio

build:
	@gcc -o audio audio.c `sdl2-config --cflags --libs`
