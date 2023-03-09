#include <stdio.h>
#include <stdlib.h>
// define tree type
typedef struct treeNode {
	int value;
	struct treeNode* left;
	struct treeNode* right;
} treeNode;


// create a node with value and return the node
treeNode* createNode(int val) {
	// create empty tree with the size of treeNode struct
	treeNode* node = malloc(sizeof(treeNode)); 
	if (node != NULL) {
		node->left = NULL;
		node->right = NULL;
		printf("Node created with value : %p \n", node);
		node->value = val;
	}
		printf("Node created with value : %d \n", val);
	return node;
}



// insert a node into a tree in order
treeNode* insertNode(treeNode** treePtr, int val) {

	treeNode* node = *treePtr;
	if (node == NULL) {
		printf("CREATE = %d\n", val);
		node = createNode(val);

	}
	else {
		
		printf("value in head = %d, INSERTION = %d\n", node->value, val);

		if (node->value> val) {
			printf("GO LEFT\n");
			node->left = insertNode((&node->left), val);
		}
		if (node->value < val) {
			printf("GO RIGHT\n");
			node->right = insertNode((&node->right), val);
		}
	}
	printf("INSERTION END\n");
	return node;
}

void tabs(int val) {
	for (int i = 0; i < val; i++) {
		printf("\t\t");
	}
}

void printTree(treeNode** treePtr, int lev) {
	treeNode* node = *treePtr;
	if (node != NULL) {
		//return;
		printf("LEV = %d\n", lev);
		tabs(lev);
		printf("%d  \n", node->value);
		lev++;
		if (node->left != NULL) {
			tabs(lev);
			printf("LEFT :   ");
			printTree((&node->left), lev);
		}
		if (node->right != NULL) {
			tabs(lev);
			printf("RIGHT :   ");
			printTree((&node->right), lev);
		}
	}
}

int main() {
	// B-Tree
	int select;
	int val = 0;
	treeNode* tree = NULL; // initial empty tree
selection:
	printf("Please select option\n");
	printf("\tOPTION\n1. Insert\t\t2. Delete\t\t3. Show Tree\t\t 4. End\n");
	// Program end in case user insert invalid value
	if (scanf_s("%d", &select) != 1) {
		printf("Invalid option. Program End.\n");
		return 0;
	}

	if (select == 4) { // User select End
		printf("Program end..\n");
		free(tree);
		return 0;
	}

	if (select == 1) {
		printf("Please insert a value : ");
		if (scanf_s("%d", &val) != 1) {
			printf("Invalid option. Program End.\n");
			return 0;
		}
		tree = insertNode(&tree, val);
	}
	else if (select == 2) {
	}
	else if (select == 3) {
//		printf("val = %d\n", tree->value);
		printTree(&tree, 0);

	}
	goto selection;

	free(tree);
	return 0;
}