#include <stdio.h>
#include <stdlib.h>

typedef struct treenode {
	int value;
	struct treenode* left;
	struct treenode* right;
} treenode;

treenode* createnode(int val) {
	treenode* result = malloc(sizeof(treenode));
	if (result != NULL) {
		result->left = NULL;
		result->right = NULL;
		result->value = val;
	}
	return result;
}

void printTabs(int numTabs) {
	for (int i = 0; i < numTabs; i++) {
		printf("\t");
	}
}

void printTree_rec(treenode* root, int lev) {
	if (root == NULL) {
		printTabs(lev);
		printf("=====<EMPTY>=====\n");
		return;
	}
	printTabs(lev);

	printf("Value = %d\n", root->value);
	
	printTabs(lev);
	printf("Left_"); // LEFT
	printTree_rec(root->left, lev + 1);
	
	printTabs(lev);
	printf("Right_"); // RIGHT
	printTree_rec(root->right, lev + 1);
	
	printTabs(lev);
	printf("Done\n\n");

}

void printTree(treenode* root) {
	printTree_rec(root, 0);
}

int main() {
	// B-Tree
	
	// create node
	treenode* n1 = createnode(10);
	treenode* n2 = createnode(120);
	treenode* n3 = createnode(11);
	treenode* n4 = createnode(9);
	treenode* n5 = createnode(1);
	treenode* n6 = createnode(90);

	n1->left = n2;
	n1->right = n3;
	n3->left = n4;
	n3->right = n5;
	n4->left = n6;

	printTree(n1);

	free(n1);
	free(n2);
	free(n3);
	free(n4);
	free(n5);
	free(n6);

	return 0;
}