#include <stdio.h>
#include <stdlib.h>
int main () {
	int num, num1;
	printf("Enter a number: ");
	scanf("%d", &num);
	num1 = abs(num);
	printf("%d",num1);
	return 0;
}
