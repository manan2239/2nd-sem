#include <stdio.h>
int main () {
	int i = 0, sum = 0;
	while (i <= 100) {
		sum += i;
		i++;
	}
	printf("The sum of all the natural and whole numbers from 1-100 is: %d", sum);
	return 0;
	
}
