#include <stdio.h>
#include <math.h>
int main () { 
	float a, b, c, s, area;
	printf("enter a: ");
	scanf("%f", &a);
	printf("enter b: ");
	scanf("%f", &b);
	printf("enter c: ");
	scanf("%f", &c);
	s = (a + b + c) / 2;
	area = sqrt((s-a)*(s-b)*(s-c));
	printf("The area is: %f", area);
	return 0;	
}

