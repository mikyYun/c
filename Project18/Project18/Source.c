#include <stdio.h>

// define tree type
typedef struct treeNode {
	int value;
	struct treeNode* left;
	struct treeNode* right;
} treeNode;


// create a node with value and return the node
treeNode* createNode(int val) {
	treeNode* tree = malloc(sizeof(treeNode));
	if (tree != NULL) {
		tree->value = val;
		tree->left = NULL;
		tree->right = NULL;
	}
	return tree;
}

// insert a node into a tree in order
treeNode* insertNode(treeNode* tree, int val) {
	int root = tree->value;

	if (root > val) {
		tree->left = insertNode(tree->left, val);
	}
	if (root < val) {
		tree->right = insertNode(tree->right, val);
	}

	return tree;
}

int main() {
	// B-Tree
	int select;
	int val;
	treeNode* tree;
getSelect:
	printf("Please select option\n");
	printf("\tOPTION\n1. Insert\t\t2. Delete\t\t3. Show Tree\t\t 4. End\n");
	// Program end in case user insert invalid value
	if (scanf_s("%d", &select) != 1) {
		printf("Invalid option. Program End.\n");
		return 0;
	}

	if (select == 4) { // User select End
		printf("Program end..\n");
		return 0;
	}

	if (select == 1) {

		printf("Please insert a value : ");
		if (scanf_s("%d", &val) != 1) {
			printf("Invalid option. Program End.\n");
			return 0;
		}
/*
*/
		if (tree->value) {
			insertNode(tree, val);
		}
		else {
			tree = createNode(val);
		}
	}
	else if (select == 2) {

	}
	else if (select == 3) {

	}
	goto getSelect;


	return 0;
}