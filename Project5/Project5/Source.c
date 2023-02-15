#include <stdio.h>

// GCD(greatest common divisor) and LCM(least common multiple)
int main() {
	int num1, num2;
	printf("Enter two numbers. ");
	scanf_s("%d %d", &num1, &num2);
	if (num1 < 0) num1 *= -1;
	if (num2 < 0) num2 *= -1;

	int GCD = 0;
	int max = num1 > num2 ? num1 : num2;

	printf("Find GCD\n");
	for (int i = 1; i <= max / 2; i++) {
		if (num1 % i == 0 && num2 % i == 0) {
			GCD = i;
		}
	}

	printf("Find LCM\n");
	int LCM = max;
	while (LCM <= num1 * num2) {
		if (LCM % num1 == 0 && LCM % num2 == 0) {
			break;
		}
		LCM++;
	}

	printf("GCD = %d, LCM = %d", GCD, LCM);

	return 0;
}