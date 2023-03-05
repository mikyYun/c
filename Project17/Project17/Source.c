#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct treenode {
	int value;
	struct treenode* left;
	struct treenode* right;
} treenode;

treenode* createNode(int val) {
	treenode* result = malloc(sizeof(treenode));
	if (result != NULL) {
		result->left = NULL;
		result->right = NULL;
		result->value = val;
	}
	return result;
}

// print indentations to show
void printTabs(int lev) {
	for (int i = 0; i < lev; i++) {
		printf("\t");
	}
}

// print nodes recursively
void printTree_rec(treenode* root, int lev) {
	printTabs(lev);
	if (root == NULL) {
		printf("===<EMPTY>===\n");
		return;
	}
	printf("Value = %d\n", root->value);
	printTabs(lev);
	printf("Left\n");

	printTree_rec(root->left, lev + 1);
	printTabs(lev);
	printf("Right\n");

	printTree_rec(root->right, lev + 1);
	printTabs(lev);
	printf("Done\n");

}

// printing tree
void printTree(treenode* root) {
	printTree_rec(root, 0);
}

bool insertNumber(treenode** rootPtr, int val) {
	treenode* root = *rootPtr;
	if (root == NULL) { // Tree => EMPTY
		(*rootPtr) = createNode(val);
		return true;
	}
	if (val == root->value) {
		return false;
	}
	if (val < root->value) {
		return insertNumber(&(root->left), val);
	}
	else {
		return insertNumber(&(root->right), val);
	}
}

bool findNum(treenode* root, int val) {
	if (root == NULL) {
		return false;
	}
	if (root->value == val) {
		return true;
	}
	if (val < root->value) {
		return findNum(root->left, val);
	}
	else {
		return findNum(root->right, val);
	}
}

int main() {
	treenode* root = NULL;

	insertNumber(&root, 10);
	insertNumber(&root, 100);
	insertNumber(&root, 110);
	insertNumber(&root, 4);
	insertNumber(&root, 11);
	insertNumber(&root, 9);
	insertNumber(&root, -16);
	insertNumber(&root, 5);
	insertNumber(&root, 555);
	printTree(root);

	printf("%d (%d)\n", 10, findNum(root, 10));
	printf("%d (%d)\n", 100, findNum(root, 100));
	printf("%d (%d)\n", 110, findNum(root, 110));
	printf("%d (%d)\n", 4, findNum(root, 4));
	printf("%d (%d)\n", 0, findNum(root, 0));
	printf("%d (%d)\n", 5, findNum(root, 5));

	/*
	treenode* n1 = createNode(10);
	treenode* n2 = createNode(100);
	treenode* n3 = createNode(110);
	treenode* n4 = createNode(11);
	treenode* n5 = createNode(9);
	treenode* n6 = createNode(-16);
	treenode* n7 = createNode(5);
	treenode* n8 = createNode(4);
	treenode* n9 = createNode(555);

	n1->left = n2;
	n1->right = n3;
	n2->left = n4;
	n2->right = n5;
	n3->left = n6;
	n3->right = n7;
	n4->left = n8;
	n5->right = n9;

	printTree(n1);

	free(n1);
	free(n2);
	free(n3);
	free(n4);
	free(n5);
	free(n6);
	free(n7);
	free(n8);
	free(n9);
	*/
	return 0;
}