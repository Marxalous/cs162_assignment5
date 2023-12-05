#include "linked_list.h"

int Linked_List::get_length() {
	this->length = 0;
	Node* current = this->head;

	if (current == nullptr) return 0;

	while (current != nullptr) {
		++this->length;
		current = current->next;
	}

	return this->length;
}

void Linked_List::print() {
	Node* current = this->head;

	while (current != nullptr) {
		cout << " " << current->val;
		current = current->next;
	}

	cout << "\n";
	return;
}

void Linked_List::clear() {
	// delete the entire list (remove all nodes and reset length to 0)
	// Your code goes here:
	Node* current = this->head;

	if (this->head == nullptr) return;

	while (current != nullptr) {
		Node* next_node = current->next;
		delete current;
		current = next_node;
	}

	this->head = nullptr;
	this->length = 0;

	return;
}

void Linked_List::push_front(int val) {
	Node* temp_head = new Node();

	temp_head->val = val;

	if (this->head != nullptr) temp_head->next = this->head;
	else temp_head->next = nullptr;

	this->head = temp_head;

	return;
}

void Linked_List::push_back(int val) {
	Node* current = this->head;
	Node* temp_node = new Node(val, nullptr);

	if (this->head == nullptr) {
		this->head = temp_node;
		return;
	}

	while (current->next != nullptr) {
		current = current->next;
	}

	current->next = temp_node;

	return;
}

void Linked_List::insert(int val, int index) {
	Node* current = this->head;

	if (this->head == nullptr) push_front(val);

	if (index == 0) push_front(val);							// Edge case: start
	else if (index > this->get_length()) return;				// Edge case: further out than length
	else if (index == this->get_length()) push_back(val);		// Edge case: end

	else {
		Node* new_node = new Node();
		Node* previous;

		new_node->val = val;

		for (int i = 0; i < index; ++i) {
			previous = current;
			current = current->next;
		}

		new_node->next = previous->next;
		previous->next = new_node;
	}

	return;
}

void Linked_List::pop_back() {
	Node* previous;
	Node* current = this->head;

	if (this->head == nullptr) return;

	if (this->head->next == nullptr) {
		this->head = nullptr;
		return;
	}

	while (current->next != nullptr) {
		previous = current;
		current = current->next;
	}

	delete current;
	previous->next = nullptr;

	return;
}

void Linked_List::pop_front() {
	Node* temp_head;

	if (this->head == nullptr) return;

	if (this->head->next != nullptr) {
		temp_head = this->head;
		this->head = head->next;
		delete temp_head;
	}
	else {
		this->head = nullptr;
	}

	return;
}

void Linked_List::remove(int index) {
	Node* current = this->head;
	Node* previous;

	if (this->head == nullptr) return;

	if (index == 0) {
		pop_front();
		return;
	}															// Edge case: start
	else if (index > this->get_length()) return;				// Edge case: further out than length
	else if (index == this->get_length()) {
		pop_back();
		return;
	}															// Edge case: end

	for (int i = 0; i < index; ++i) {
		previous = current;
		current = current->next;
	}

	previous->next = current->next;
	current->next = nullptr;

	return;
}

void Linked_List::sort_ascending() {
	// sort the nodes in ascending order. You must implement the recursive Merge Sort algorithm
	// Note: it's okay if sort_ascending() calls a recursive private function to perform the sorting.
	// Your code goes here:

	return;
}

void Linked_List::sort_descending() {
	// sort the nodes in descending order
	// Your code goes here:

	return;
}