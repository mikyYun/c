#include <stdio.h>

int main() {
	char arr[6] = "hello";
	char* pointer;

	pointer = &arr[0];

	printf("value: %c, address: %p\n", *pointer, pointer); // *pointer == arr[0]
	printf("next value: %c, wrong value: %c\n", *(pointer + 4), *pointer + 1);

	return 0;
}