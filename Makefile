# TODO: This is a prototype make setup.
#
# Filename: Makefile
# Authors: Ali Viettry, Martin Hung
# Description: This makefile will compile code for MyCompetition.
# Date of start: 2016-12-13
# Last Modified: 2016-12-13, Ali Viettry

CC=g++
CXXFLAGS=-std=c++11

# Always cleans before running the program

all:	clean MyCompetition

# MyCompetition requires utilizes the classes: 
# Tournament, Event, and Player

MyCompetition:	Tournament.o Event.o Player.o

# Object files needed to utilize MyCompetition executable.

Tournament.o:	Tournament.hpp Event.hpp Player.hpp

Event.o:	Event.hpp Player.hpp

Player.o:	Player.hpp

clean:
	rm -rf MyCompetition *.o core*
