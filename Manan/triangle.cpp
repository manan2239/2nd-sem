#include <stdio.h>
int main () {
	float base, alti;
	printf("enter base: ");
	scanf("%f",&base);
	printf("enter altitude: ");
	scanf("%f",&alti);
	float area = 0.5 * base * alti;
	printf("the area of the triangle is: %f", area);
	return 0;
}

