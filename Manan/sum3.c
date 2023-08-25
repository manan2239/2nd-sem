#include <stdio.h>
int main () {
	int num, dig1, dig2, dig3, sum;
	printf("Enter a 3-digit number: ");
	scanf("%d", &num);
	dig1 = num / 100;
	dig2 = (num / 10) % 10;
	dig3 = num % 10;
	sum = dig1 + dig2 + dig3;
	printf("The sum of the digits is: %d", sum);
	return 0;
}
