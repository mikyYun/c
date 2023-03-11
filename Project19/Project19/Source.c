#include <stdio.h>
#include <stdlib.h>

// define type Node
typedef struct Node {
	int val;
	struct Node* next;
} Node;

// create and return a pointer of Node
Node* createNode(Node* head, int* val) {
	//int val;


getVal:
	printf("What is the value to insert? ");
	if (scanf_s("%d", val) != 1) {
		while (getchar() != '\n');
		printf("Please insert a valid integer number\n");
		goto getVal;
	}

	Node* n = (Node*)malloc(sizeof(Node)); // reserve for a node with the size of type Node
	n->val = *val; // assign value
	n->next = NULL; 
	if (head == NULL) {
		printf("THE HEAD\n");
		return n;
	}


	Node* temp = head;
	// find a node where next is null
	while (temp->next != NULL) {
		temp = temp->next;
	}

	// assign new node to the empty node
	temp->next = n;

	return head;
}

void showNode(Node* head) {
	if (head == NULL) {
		printf("<EMPTY NODE>\n");
	}
	else {
		printf("%d  ->  ", head->val);
		showNode(head->next);
	}
}

Node* removeNode(Node* head, int* val) {
	if (head == NULL) {
		return NULL;
	}
getVal:
	printf("What is the value to remove? ");
	if (scanf_s("%d", val) != 1) {
		while (getchar() != '\n');
		printf("Please insert a valid integer number\n");
		goto getVal;
	}
	// if the value of this node == val, return head.next and free original head from memory
	if (head->val == *val) {
		Node* temp = head->next;
		free(head);
		return temp;
	}

	// go through list to find the value until next node is empty or find the value
	Node* temp = head;
	while (temp->next != NULL) {
		if (temp->next->val == *val) { // check next node
			Node* target = temp->next;
			temp->next = target->next;
			free(target);
			return head;
		}
		temp = temp->next;
	}
	return head;
}

int main() {
	// LINKED LIST
	Node* head = NULL;
	int select;
	int val;
selection:
	printf("\t1. Insert\n\t2. Remove\n\t3. Show\n\t4. End\n");
	if (scanf_s("%d", &select) != 1) {
		while (getchar() != '\n');
		printf("Invalid option. Program End..");
		return 0;
	}
	if (select == 4) {
		printf("============== Program End ==============\n");
		return 0;
	}


	switch (select) {
	case 1:
		printf("============== INSERTION ==============\n");
		head = createNode(head, &val);
		break;
	case 2:
		printf("============== REMOVE ==============\n");
		head = removeNode(head, &val);
		break;
	case 3:
		printf("============== SHOW ==============\n");
		showNode(head);
		break;
	default:
		return 0;
//		break;
	}
//	head = createNode(head, 5);

	printf("Value of head = %d\n", head->val);
	goto selection;

	return 0;
}