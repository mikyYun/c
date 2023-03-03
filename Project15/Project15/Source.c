#include <stdio.h>

int main() {
	int num1 = 1, num2 = 2, num3 = 3;
	int* checker;
	printf("Address : %p, Value : %d\n", &num1, num1);
	printf("Address : %p, Value : %d\n", &num2, num2);
	printf("Address : %p, Value : %d\n", &num3, num3);

	printf("\n\n >> 1\n");
	checker = &num1;
	printf("Checker address: %p, Value: %d\n", checker, *checker);
	
	printf("\n\n >> 2\n");
	checker = &num2;
	printf("Checker address: %p, Value: %d\n", checker, *checker);
	*checker *= 3;
	printf("Checker address: %p, Value: %d\n", checker, *checker);

	printf("\n\n >> 3\n");
	int *modifier = &num3;
	checker = &num3;
	printf("Checker address: %p, Value: %d\n", checker, *checker);
	printf("Modifier address: %p, Value: %d\n", modifier, *modifier);

	*modifier /= 2;
	printf("Checker address: %p and %p, Value: %d\n", checker, &checker, *checker);
	printf("Modifier address: %p and %p, Value: %d\n", modifier, &modifier, *modifier);


	return 0;
}