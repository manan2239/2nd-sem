#include <stdio.h>
float area(int b, int h);
int main () {
	int b, h;
	float ar;
	printf("Enter base and height of a right angled triangle: ");
	scanf("%d %d", &b, &h);
	ar = area(b, h);
	printf("Area is %f", ar);
	return 0;
}
float area(int b, int h) {
	float ar;
	ar = 1/2.0 * b * h;
	return ar;
}
