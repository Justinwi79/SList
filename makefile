main: main.o slist.o
	g++ -o main -std=c++11 main.o slist.o
main.o: main.cpp
	g++ -c -std=c++11 main.cpp
slist.o: slist.cpp
	g++ -c -std=c++11 slist.cpp

clean:
	-rm *.o
	-rm *.h.gch
