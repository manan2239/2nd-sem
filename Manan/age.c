#include <stdio.h>
int main () {
	int a1, a2, a3;
	printf("Enter ages of Ram, Shayan and Ajay: ");
	scanf("%d %d %d", &a1, &a2, &a3);
	if (a1 > a2 && a1 > a3)
	printf("Ram is the oldest.");
	else if (a2 > a1 && a2 > a3)
	printf("Shayan is the oldest.");
	else
	printf("Ajay is the oldest.");
	return 0;
}
