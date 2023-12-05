// The following is an example program that
// does some basic, limited testing of your
// ways_to_top() implementation.

#include "default_includes.h"

#include "stairs.h"

int main() {
	cout << ways_to_top(3) << endl; // Should print 4
	cout << ways_to_top(4) << endl; // Should print 7
	cout << ways_to_top(5) << endl; // Should print 13
}