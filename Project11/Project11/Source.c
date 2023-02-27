#include <stdio.h>
#include <string.h>

int myStrlen(char* arr) {
	int counter = 0;
	char* cp = arr; // == &arr[0]

	while (*cp != '\0') {
		counter++;
		cp++;
	}
	return counter;
}

char* myStrcat(char* str1, char* str2) {
	int count1 = 0;
	while (*(str1 + count1) != '\0') {
		count1++;
	}

	int count2 = 0;
	while (*(str2 + count2) != '\0') {
		*(str1 + count1 + count2) = *(str2 + count2);
		count2++;
	}

	*(str1 + count1 + count2) = '\0';
	return str1;
}

int myStrcmp(char* str1, char* str2) {
	while (*str1 == *str2) {
		if (*str1 == '\0' || *str2 == '\0') {
			break;
		}
		str1++;
		str2++;

	}

	if (*str1 == '\0' && *str2 == '\0') {
		return 0;
	}
	else {
		return -1;
	}
}

int main() {
	char arr[20] = "string";
	char arr2[20] = "string";
	if (myStrcmp(arr, arr2) == 0) {
		printf("Given strings are same\n");
	}
	else {
		printf("Given strings are different\n");
	}

//	printf("%s\n", myStrcat(arr, arr2));

	/*
	char arr[100] = "random string jaeivojasdov";
	printf("%s\n", arr);
	printf("strlen = %d\n", (int)strlen(arr));
	printf("My strlen = %d\n", myStrlen(arr));

	*/

	/*
	char ch = 'a';

	printf("%p\n", &ch);
	printf("%c , %c \n", ch, *&ch);

	char arr[100] = "mike yun";
	printf("%p, %p\n", &arr, &arr[0]);
	printf("%c , %s \n", arr[0], *&arr);
	*/


	/*
	char arr1[100] = "abcaejfklcjabioejkfd";
	char arr2[100] = "testcopy";
	char arr3[100];
	printf("%s copy to %s\n", arr2, arr1);
	strcpy_s(arr1, sizeof(arr1), &arr2);

	//
	if (strcpy_s(arr3, sizeof(arr3), &arr2) == 0) {
		printf("Copy completed\n");
		printf("%s copied to %s\n", arr3, arr2);
	}
	else {
		printf("Copy failed\n");
	}
	*/

	return 0;
}