#include <stdio.h>

int main() {
	char name[256];
	printf("Your name? ");
	scanf_s("%s", &name, sizeof(name)/sizeof(name[0]) - 1);

	int age;
	printf("Your age? ");
	scanf_s("%d", &age);

	float weight;
	printf("Your weight? ");
	scanf_s("%f", &weight);

	double height;
	printf("Your height? ");
	scanf_s("%lf", &height);

	char why[256];
	printf("Why are you here? ");
	scanf_s("%s", &why, sizeof(why)/sizeof(why[0]) - 1);

	printf("\n============================\n");
	printf("NAME : %s\n", name);
	printf("AGE : %d\n", age);
	printf("WEIGHT: %.2f\n", weight);
	printf("HEIGHT : %.2f\n", height);
	printf("WHY : %s\n", why);
}