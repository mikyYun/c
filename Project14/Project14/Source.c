#include <stdio.h>
#include <stdlib.h>

int main() {
	srand(time(NULL));
	int num = rand() % 100 + 1;// 1~100
	printf("What is the NUM = ????\n");
	int answer = 0;
	int chances = 5;
	while (chances > 0) {
		printf("You have %d chance(s)\n", chances);
		printf("Guess a number (1 ~ 100) : ");
		if (scanf_s("%d", &answer) != 1) {
			while (getchar() != '\n');
			printf("Warning: invlid insertion\n");
		}
		else {
			if (num < answer) {
				printf("DOWN \n\n");
			}
			else if (num > answer) {
				printf("UP \n\n");
			}
			else {
				printf("CORRECT \n\n");
				break;
			}
		}
			chances--;

	}
	return 0;
}