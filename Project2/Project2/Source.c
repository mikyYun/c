#include <stdio.h>

int main() {
	int n = 0;
	int sum = 0;

	/* do-while
	do {
		printf("Enter a number : ");
		scanf_s("%d", &n);
		sum += n;
		printf("Sum is %d\n", sum);
	} while (sum <= 100);
	*/

	/* for
	
	for (; sum <= 100;) {
		printf("Enter a number : ");
		scanf_s("%d", &n);
		sum += n;
		printf("Sum is %d\n", sum);
	}
	*/

	printf("Final sum is %d\n", sum);
	return 0;
}