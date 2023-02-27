#include <stdio.h>
void swap(int* a, int* b);
int main() {
	int a = 5; // assign integer value 5 as variable 'a'
	int* p; // create pointer which size of 1 of memory(4 or 8 bytes)

	p = &a; // initializing value of pointer 'p' as memory address of 'a'

	///////////////////////////////////////
	// using pointer function can change value of variables without returing from a function.(local -> global)

	int var1 = 10;
	int var2 = 5;
	int* pointer1;
	int* pointer2;

	// init
	pointer1 = &var1; 
	pointer2 = &var2;
	printf("var1 - var2 = %d\n", *pointer1 - *pointer2);

	// SWAP
	swap(&var1, &var2);
	printf("var1 - var2 = %d\n", *pointer1 - *pointer2);

	swap(pointer1, pointer2);
	printf("var1 - var2 = %d\n", *pointer1 - *pointer2);

}

void swap(int* a, int* b) {
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}