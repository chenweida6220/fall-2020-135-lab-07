main: main.o unindent.o indent.o
	g++ -o main main.o unindent.o indent.o

tests: tests.o unindent.o indent.o
	g++ -o tests tests.o unindent.o indent.o

main.o: main.cpp unindent.h indent.h

tests.o: tests.cpp doctest.h

unindent.o: unindent.cpp unindent.h

indent.o: indent.cpp indent.h

clean:
	rm -f a.out main tests main.o tests.o unindent.o indent.o
