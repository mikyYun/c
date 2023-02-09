#include <stdio.h>

void main() {
	// modifiable variable
	int num = 5;
	printf("First num = %d\n", num);
	num = 11;
	printf("Second num = %d\n", num);

	const constNum = 10;
	printf("Const num = %d\n", constNum);
	// constNum = 222; // expresssion must be a modifiable lvalue

	char lastName[20];
	printf("Enter your last name\n");
	scanf_s("%s", &lastName, sizeof(lastName));

	printf("Your name is %s\n", lastName);

	char firstName[20];
	printf("Enter your first name\n");
	scanf_s("%s", &firstName, sizeof(firstName));
	printf("Your first name is %s\n", firstName); // mike => mike, mike yun => mike and yun goes to next scanf

	printf("Re-enter your first name\n");
	fgets(firstName, 20, stdin); // mike yun => mike yun
	printf("Your first name is %s\n", firstName);
}