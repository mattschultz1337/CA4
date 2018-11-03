#
# Specifiy the target
all:	PlayingCard

# Specify the object files that the target depends on
# Also specify the object files needed to create the executable
PlayingCard:	LLC.o PlayingCard.o
	g++  PlayingCard.o LLC.o -o PlayingCard

LLC.o: LLC.cpp
	g++ -g -Wall LLC.cpp -o LLC.o
# Specify how the object files should be created from source files
PlayingCard.o:	PlayingCard.cpp
	g++ -g -Wall PlayingCard.cpp -o PlayingCard.o

# Specify the object files and executables that are generated
# and need to be removed to re-compile the whole thing
clean:
	rm -f *.o PlayingCard.exe
