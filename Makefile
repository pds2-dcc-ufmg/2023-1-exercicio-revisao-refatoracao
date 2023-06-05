CFLAGS = -std=c++11 -Wall -Iinclude

vpl_exec: ./build/main.o ./build/Streaming.o ./build/Video.o ./build/Filme.o ./build/Serie.o
	g++ $(CFLAGS) ./build/main.o ./build/Streaming.o ./build/Video.o ./build/Filme.o ./build/Serie.o -o vpl_execution

./build/main.o: ./src/main.cpp
	g++ $(CFLAGS) -c ./src/main.cpp -o ./build/main.o

./build/Streaming.o: ./src/entidades/Streaming.cpp ./include/Streaming.hpp
	g++ $(CFLAGS) -c ./src/entidades/Streaming.cpp -o ./build/Streaming.o

./build/Video.o: ./src/entidades/Video.cpp ./include/Video.hpp
	g++ $(CFLAGS) -c ./src/entidades/Video.cpp -o ./build/Video.o

./build/Filme.o: ./src/entidades/Filme.cpp ./include/Filme.hpp
	g++ $(CFLAGS) -c ./src/entidades/Filme.cpp -o ./build/Filme.o

./build/Serie.o: ./src/entidades/Serie.cpp ./include/Serie.hpp
	g++ $(CFLAGS) -c ./src/entidades/Serie.cpp -o ./build/Serie.o