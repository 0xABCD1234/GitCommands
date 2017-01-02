#include <iostream>
#include <string>

using namespace std;

struct Node {
	string val;
	Node* next;
};
typedef Node* List;


void reverse (List& first) {

	Node* prev = NULL;

	while (NULL != first) {
		// Remember first->next before resetting first
		Node* temp = first->next;
		first->next = prev;
		prev = first;
		first = temp;
	}
	// Now reset first at the end!
	first = prev;
}

int main(){ return 0; }
