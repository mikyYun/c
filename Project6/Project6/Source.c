#include <stdio.h>

void printArrRow(double arr[][12], int rows, int columns) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			printf("%.2lf  ", arr[i][j]);
		}
		printf("\n");
	}
}

void printArrColum(double arr[][12], int rows, int columns) {
	for (int i = 0; i < columns; i++) {
		for (int j = 0; j < rows; j++) {
			printf("%.2lf  ", arr[j][i]);
		}
		printf("\n");
	}
}

int main() {
	double rainFall[5][12] = {
		{4.3, 4.4, 1.1, 3.5, 3.3, 3.9, 2.0, 3.1, 3.3, 1.9, 2.6, 7.7},
		{4.1, 2.3, 4.4, 3.5, 3.1, 3.9, 2.0, 3.1, 3.4, 1.0, 3.6, 4.7},
		{1.3, 3.2, 1.1, 4.4, 3.3, 3.9, 2.0, 3.1, 3.3, 3.1, 2.6, 1.7},
		{2.3, 4.2, 3.1, 3.5, 4.4, 3.0, 4.4, 3.1, 3.2, 2.4, 6.6, 2.0},
		{4.5, 4.1, 2.1, 3.5, 3.3, 8.9, 2.0, 3.0, 3.1, 1.9, 2.6, 3.3},
	};
	printArrRow(rainFall, 5, 12);
	printArrColum(rainFall, 5, 12);
	return 0;
}
