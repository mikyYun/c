#include <stdio.h>
#include <math.h>

void power(int base, int exponent);

int main() {
	int num;

	printf("Enter a number: ");
	scanf_s("%d", &num);

	power(num, num);
	printf("%d power of %d is %lf\n", num, num, pow(num, num));


	return 0;
}

void power(int base, int exponent) {
	int result = 1;

	for (int i = 0; i < exponent; i++) {
		result *= base;
	}
	printf("%d power of %d is %d\n", base, exponent, result);
}