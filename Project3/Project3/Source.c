#include <stdio.h>

int main() {
	printf("Enter your number: ");
	int n;
	scanf_s("%d", &n);

	printf("The divisor of %d are : ", n);
	
	printf("1 ");
	if (n == 1) {
		printf("\n Done.");
		return 0;
	}
	// from 2 to half of n
	for (int i = 2; i <= n / 2; i++) { 
		if (n % i == 0) {
			printf("%d ", i);
		}
	}
	printf("%d\n Done.", n);

	
	return 0;
}