#!/bin/bash

# $(shell echo `"---------------- start compile --------------------"`)

# show g++ version
# $(shell echo `g++ -v`)

CC = g++

TAR = 069_sqrt_x
SOURCE = $(TAR).cpp

# $(shell echo "source = "$(SOURCE))

ALL: $(TAR).o
	$(CC) -o $(TAR) $(SOURCE)
clean:
	rm -rvf $(TAR).o
	rm -rvf $(TAR)

