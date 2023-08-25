#include <stdio.h>
int main () {
	int n = 0;
	while (n <= 100) {
		if (n % 2 == 0) {
			printf("Even: %d\n", n); 
		}
		else{
		printf("Odd: %d\n", n);	
		}
		n++;
	}
	return 0;
}
