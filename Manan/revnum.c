#include <stdio.h>
int main () {
	int num1, a, b, c, d, e, num2;
	printf("Enter a 5 digit number: ");
	scanf("%d", &num1);
	a = num1 % 10;
	b = num1/10 % 10;
	c = num1/100 % 10;
	d = num1/1000 % 10;
	e = num1/10000 % 10;
	num2 = a*10000+b*1000+c*100+d*10+e;
	if (num1 == num2)
	printf("The number %d is the same when reversed. It's called a palindrome.'" , num1);
	else
	printf("%d is the reverse of %d", num2, num1);
	return 0;
}
