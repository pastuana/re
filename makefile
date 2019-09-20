main.out: stack.o main.o
	g++ -std=c++11 -Wall -pedantic -Wextra -g main.o stack.o -o main.out

main.o: main.cpp stack.h
	g++ -std=c++11 -Wall -pedantic -Wextra -g main.cpp -c -o main.o

stack.o: stack.cpp stack.h
	g++ -std=c++11 -Wall -pedantic -Wextra -g stack.cpp -c -o stack.o

