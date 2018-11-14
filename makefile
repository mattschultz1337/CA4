#
# Specifiy the target
all:	PlayingCard

# Specify the object files that the target depends on
# Also specify the object files needed to create the executable
PlayingCard:	PlayingCard.o LLC.o
	g++  PlayingCard.o LLC.o  -o PlayingCard

# Specify how the object files should be created from source files
LLC.o:	LLC.cpp
	g++ -c LLC.cpp

PlayingCard.o: 		PlayingCard.cpp
	g++ -c PlayingCard.cpp

# Specify the object files and executables that are generated
# and need to be removed to re-compile the whole thing
clean:
	rm -f *.o PlayingCard.exe
