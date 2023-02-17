#include <stdio.h>

int main() {
	double rainFall[5][12] = {
	{4.3, 4.4, 1.1, 3.5, 3.3, 3.9, 2.0, 3.1, 3.3, 1.9, 2.6, 7.7},
	{4.1, 2.3, 4.4, 3.5, 3.1, 3.9, 2.0, 3.1, 3.4, 1.0, 3.6, 4.7},
	{1.3, 3.2, 1.1, 4.4, 3.3, 3.9, 2.0, 3.1, 3.3, 3.1, 2.6, 1.7},
	{2.3, 4.2, 3.1, 3.5, 4.4, 3.0, 4.4, 3.1, 3.2, 2.4, 6.6, 2.0},
	{4.5, 4.1, 2.1, 3.5, 3.3, 8.9, 2.0, 3.0, 3.1, 1.9, 2.6, 3.3},
	};

	double rainFallYr[5];
	
	// yearly
	for (int i = 0; i < 5; i++) {
		rainFallYr[i] = 0;
		for (int j = 0; j < 12; j++) {
			
			rainFallYr[i] += rainFall[i][j];
		}
	}

	for (int i = 0; i < 5; i++) {
		printf("%.2lf  ", rainFallYr[i]);
	}

	double monthlyAvg[12];
	// avg monthly
	for (int i = 0; i < 12; i++) {
		monthlyAvg[i] = 0;
		for (int j = 0; j < 5; j++) {
			monthlyAvg[i] += rainFall[j][i];
		}
		monthlyAvg[i] /= 5;
	}

	for (int i = 0; i < 12; i++) {
		printf("%.2lf  ", monthlyAvg[i]);
	}
	return 0;
}