LIBS=-lsfml-graphics -lsfml-window -lsfml-window -lsfml-system

all: thegame

main.o: main.cpp
	g++ -c "main.cpp" -o main.o

player.o: player.cpp
	g++ -c "player.cpp" -o player.o

thegame: main.o player.o
	g++ -o thegame main.o player.o $(LIBS)
