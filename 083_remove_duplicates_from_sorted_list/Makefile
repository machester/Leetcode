#!/bin/bash

# $(shell echo `"---------------- start compile --------------------"`)

# show g++ version
# $(shell echo `g++ -v`)

CC = g++

TAR = 083_remove_duplicates_from_sorted_list
SOURCE = $(TAR).cpp

# $(shell echo "source = "$(SOURCE))

ALL: $(TAR).o
	$(CC) -o $(TAR) $(SOURCE)
clean:
	rm -rf $(TAR).o
	rm -rvf $(TAR)

