CC = g++
CFLAGS = -lncurses

all: snake

snake: main.o game.o draw.o input.o
	$(CC) -o snake main.o game.o draw.o input.o $(CFLAGS)

main.o: main.cpp game.h draw.h input.h
	$(CC) -c main.cpp

game.o: game.cpp game.h
	$(CC) -c game.cpp

draw.o: draw.cpp draw.h game.h
	$(CC) -c draw.cpp

input.o: input.cpp input.h game.h
	$(CC) -c input.cpp

clean:
	rm -f snake main.o game.o draw.o input.o
