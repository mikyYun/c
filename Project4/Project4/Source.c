#include <stdio.h>

int main() {
	int n = 0;
	printf("Enter your first number: ");
	scanf_s("%d", &n);

	int min = n, max = n;
	for (int i = 0; i < 10; i++) {
		printf("Next number: ");
		scanf_s("%d", &n);

		min = n < min ? n : min;
		max = n > max ? n : max;
	}

	printf("min = %d, max = %d\n", min, max);
	return 0;
}