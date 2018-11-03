#
# Specifiy the target
all:	PlayingCard

# Specify the object files that the target depends on
# Also specify the object files needed to create the executable
PlayingCard:	PlayingCard.o
	g++  PlayingCard.o  -o PlayingCard

# Specify how the object files should be created from source files
PlayingCard.o:	PlayingCard.cpp
	g++ -g -Wall -c PlayingCard.cpp LLC.cpp

# Specify the object files and executables that are generated
# and need to be removed to re-compile the whole thing
clean:
	rm -f *.o PlayingCard.exe
