main: main.o unindent.o
	g++ -o main main.o unindent.o

tests: tests.o unindent.o
	g++ -o tests tests.o unindent.o

main.o: main.cpp unindent.h

tests.o: tests.cpp doctest.h

unindent.o: unindent.cpp unindent.h

clean:
	rm -f a.out main main.o tests.o unindent.o
