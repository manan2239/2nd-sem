#include <stdio.h>
int main () {
	int num, d1, d2, d3, d4, d5, rev;
	printf("Enter a 5-digit number: ");
	scanf("%d", &num);
	d1 = num / 10000;
	d2 = (num / 1000) % 10;
	d3 = (num / 100) % 10;
	d4 = (num / 10) % 10;
	d5 = (num % 10);
	rev = d5*10000+d4*1000+d3*100+d2*10+d1;
	printf("Reverse number is: %d\n", rev);
	if (num == rev)
	printf("Given number is a palindrome");
	else 
	printf("Given number is not a palindrome");
	return 0; 
}

