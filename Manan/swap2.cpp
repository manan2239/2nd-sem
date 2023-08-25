#include <stdio.h>
int main () {
	int a, b, swapped;
	printf("a = ");
	scanf("%d", &a);
	
	printf("\nb = ");
	scanf("%d", &b);
	
	swapped = a;
	a = b;
	b = swapped;
	printf("after swapping: a = %d", a);
	printf("\nafter swapping: b = %d", swapped);
	return 0;		
}
