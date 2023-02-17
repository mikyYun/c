#include <stdio.h>

void printString(char name[]) {
	for (int i = 0; i < strlen(name); i++) {
		printf("%c", name[i]);
	}
}

int main() {
	char nm[20];
	printf("Insert your name : ");
	gets(nm);
//	scanf_s("%s", nm, sizeof(nm));
	//for (int i = 0; i < sizeof(nm) / sizeof(char); i++) {
	//}
	printf("%s\n", nm);
	puts(nm);

	return 0;
}