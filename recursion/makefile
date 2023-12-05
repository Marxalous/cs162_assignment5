cc = g++ -std=c++11 -g
exe = recursion.exe

$(exe): recurse.o stairs.o
	$(cc) recurse.o stairs.o -o $(exe)

recurse.o: recurse.cpp default_includes.h
	$(cc) -c recurse.cpp

stairs.o: stairs.cpp stairs.h
	$(cc) -c stairs.cpp

clear:
	rm -f *.out *.o

clean:
	rm -f *.out *.o $(exe)

run: $(exe)
	@clear && $(exe)