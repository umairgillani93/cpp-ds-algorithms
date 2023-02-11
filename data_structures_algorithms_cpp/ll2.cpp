// Creating a Linked-List data structure with another approch
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// lets create individual Node strucure initially
struct Node {
	// Node has only two attributes
	// 1 - data
	// 2 - Node pointer to Next node
	int data;
	struct Node *next;
};

struct Node *head; // delcare the head Struct pointer globally

// lets create our linked list now
void create(int A[], int n) {
	// this create functions takes two parameters
	// 1 - Array of integers, from which we'll create our linked-list
	// 2 - size of the array
	
	struct Node *last; // last node 
	
	head -> data = A[0];
	head -> next = NULL;

	last = head;
	
	for (int i = 1; i < n; i++) {
		struct Node *middle;
		middle -> data = A[i]; // assing array index to data of middle node
		middle -> next = NULL; // assign middle's next-node to NULL
		last -> next = middle; // assign last's next-node to middle
		last = middle; // assing middle to last
	}
}

void display(struct Node *p) {
	while (!p) {
		cout << p -> data << '\n';
		p = p -> next;
	}
}

int main() {
	int A[] = {3, 5, 7, 10, 15};
	int n = 5;
	create(A, n);
	display(head);
	return 0;
}

