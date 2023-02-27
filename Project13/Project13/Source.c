#include <stdio.h>

int main() {
	// print pyramid
	/*
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5 - i; j++) {
			printf(" ");
		}
		for (int j = 0; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
	*/

	int floor;
	printf("Floors? ");
	scanf_s("%d", &floor);

	for (int i = 0; i < floor; i++) {
		for (int j = 0; j < floor - i - 1; j++) {
			printf("S");
		}
		for (int j = 0; j <= i * 2 + 1; j++) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}