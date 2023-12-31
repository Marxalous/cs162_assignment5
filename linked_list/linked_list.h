#ifndef LINKED_LIST
#define LINKED_LIST

#include "node.h"
#include "default_includes.h"

using namespace std;

class Linked_List {
	private:
		int length; // the number of nodes contained in the list
		Node* head; // a pointer to the first node in the list
		// anything else you need...
	public:
		Linked_List() : length(0), head(nullptr) {};
		Linked_List(int length, Node* head) : length(length), head(head) {};

		int get_length();
		// note: there is no set_length(unsigned int) (the reasoning should be intuitive)

		void print(); // output a list of all integers contained within the list
		void clear(); // delete the entire list (remove all nodes and reset length to 0)

		void push_front(int); // insert a new value at the front of the list
		void push_back(int); // insert a new value at the back of the list
		void insert(int val, int index); // insert a new value in the list at the specified index

		void pop_back(); // remove the node at the back of the list
		void pop_front(); // remove the node at the front of the list
		void remove(int index); // remove the node at index of the list

		void sort_ascending(); // sort the nodes in ascending order. You must implement the recursive Merge Sort algorithm
		// Note: it's okay if sort_ascending() calls a recursive private function to perform the sorting.
		void sort_descending(); // sort the nodes in descending order

		// you can add extra member variables or functions as desired

};

#endif