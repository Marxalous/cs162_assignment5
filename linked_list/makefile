cc = g++ -std=c++11 -g
exe = linked_list.exe

$(exe): linked_list.o test_linked_list.o
	$(cc) linked_list.o test_linked_list.o -o $(exe)

linked_list.o: linked_list.cpp linked_list.h default_includes.h node.h
	$(cc) -c linked_list.cpp

test_linked_list.o: test_linked_list.cpp
	$(cc) -c test_linked_list.cpp

clear:
	rm -f *.out *.o

clean:
	rm -f *.out *.o $(exe)

run: $(exe)
	@clear && $(exe)