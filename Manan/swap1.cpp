#include <stdio.h>
int main () {
	int a, b;
	printf("a = ");
	scanf("%d", a);
	printf("b = ");
	scanf("%d", b);
	
	printf("swapping a with b gives \n");
	a = b;
	printf("new a = ", a);
	printf("new b = ", b);
	return 0;
	
}
