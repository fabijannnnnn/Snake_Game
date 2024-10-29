CC = gcc
CFLAGS = -lncurses
SRC_DIR = src
TARGET = snake
SRC = main.cpp

all: run

run: build
	./$(TARGET)

build:
	$(CC) $(SRC_DIR)/$(SRC) -o $(TARGET) $(CFLAGS)

clean cl:
	rm -f snake
