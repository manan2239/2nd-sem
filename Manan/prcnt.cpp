#include <stdio.h>
int main () {
	float m1, m2, m3, m4, m5, total, percent;
	printf("marks in sub1: ");
	scanf("%f",&m1);
	printf("marks in sub2: ");
	scanf("%f",&m2);
	printf("marks in sub3: ");
	scanf("%f",&m3);
	printf("marks in sub4: ");
	scanf("%f",&m4);
	printf("marks in sub5: ");
	scanf("%f",&m5);
	total = m1 + m2 + m3 + m4 + m5;
	percent = total / 500 * 100;
	printf("percentage is: %f", percent);
	scanf("%f", &percent);
	return 0;
}

