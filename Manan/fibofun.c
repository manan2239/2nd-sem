#include <stdio.h>
int fibo(int num) {
	int i, fir = 0, sec = 1, next;
	for (i = 0; i < num; ++i)
	{
		printf("%d ", fir);
		next = fir + sec;
		fir = sec;
		sec = next;
	}
}
int main () {
	int num;
	printf("Enter the number of terms: ");
	scanf("%d", &num);
	return fibo(num);
	
return 0;
}
