#include <stdio.h>
#include <stdlib.h>

void main() {
	char color[20];
	char pluralNoun[20];
	char celebrityFirst[20];
	char celebrityLast[20];
	char celebrityFull[20];

	printf("Enter a color: ");
	scanf_s("%s", color, (unsigned)_countof(color));
	printf("Enter a plural noun: ");
	scanf_s("%s", pluralNoun, (unsigned)_countof(pluralNoun));
	printf("Enter full name of a celebrity: ");
	scanf_s("%s%s", celebrityFirst, (unsigned)_countof(celebrityFirst), celebrityLast, (unsigned)_countof(celebrityLast));
	
//	getchar(); // return value ignored warning
	int c;
	while ((c = getchar()) != '\n' && c != EOF);
	
	printf("Another name: ");
	fgets(celebrityFull, 20, stdin);
	// remove new line from end of string if it exists
	int length = strlen(celebrityFull);
	if (celebrityFull[length - 1] == '\n') {
		celebrityFull[length - 1] = '\0';
	}
	printf("Roses are %s.\n", color);
	printf("%s are blue.\n", pluralNoun);
	printf("I love %s %s.\n", celebrityFirst, celebrityLast);
	printf("I love %s.\n", celebrityFull);

//	return 0;
}