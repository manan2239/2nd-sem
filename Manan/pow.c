#include <stdio.h>
#include <math.h> 
int power(int n1, int n2);
int main () {
	int n1, n2, p;
	printf("Enter two numbers: ");
	scanf("%d %d", &n1, &n2);
	p = power(n1, n2);
	printf("Num1 to the power Num2 is: %d", p);
	return 0;
}
int power(int n1, int n2) {
	int x;
	x = pow(n1, n2);
	return x;
}

