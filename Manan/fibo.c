#include <stdio.h>
int main () {
	int num, i;
	int fir = 0, sec = 1, next;
	printf("Enter the number of terms: ");
	scanf("%d", &num);
	printf("Fibonacci Series: ");
	for (i = 0; i < num; ++i)
	{
		printf("%d ", fir);
		next = fir + sec;
		fir = sec;
		sec = next;
	} 
	return 0;
}
