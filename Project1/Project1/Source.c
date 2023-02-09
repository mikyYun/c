#include <stdio.h>
// #include <stdlib.h>
#include <math.h>
void main() {
	double num = 15.6234;
	int integer = 3;
	printf("num in float is %f.\n", num); // 15.623400
	printf("num in double is %lf.\n\n", num); // 15.623400

	printf("num in under 2 decimals is %.2f.\n", num); // 15.62
	printf("num in int after type to int is %d.\n", num); // 1223206686 : type mismatch
	printf("num in int after type to int is %d.\n\n", (int)num); // 15

	printf("ceil of 15.6234 is %f.\n", ceil(15.623)); // 16.000000
	printf("floor of 15.6234 is %f.\n", floor(15.6234)); // 15.000000
	printf("ceil of 15.6234 is %f.\n", ceil(num)); // 16.000000
	printf("floor of 15.6234 is %f.\n\n", floor(num)); // 15.000000

	printf("square of 2 is %.1f\n", pow(2, 2));
	printf("3 to the power of 4 is %.1f\n", pow(3, 4));
	printf("square root of 64 is %.1f\n", sqrt(64));
	printf("square root of 64 is %.1f\n", sqrt((double)64));
}