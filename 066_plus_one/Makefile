#!/bin/bash

# $(shell echo `"---------------- start compile --------------------"`)

# show g++ version
$(shell echo `g++ -v`)

CC = g++

TAR = 066_plus_one
SOURCE = $(TAR).cpp

# $(shell echo "source = "$(SOURCE))

ALL: $(TAR).o
	$(CC) -o $(TAR) $(SOURCE)
clean:
	rm -rf $(TAR).o
cleanall:
	rm -rvf $(TAR).o
	rm -rvf $(TAR)

