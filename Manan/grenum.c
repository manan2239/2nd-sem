#include <stdio.h>
int main () {
	int n1, n2;
	int grnum = n1 > n2;
	printf("Enter two numbers: ");
	scanf("%d %d", &n1, &n2);
	switch (grnum) {
		case 0:
			printf("%d is greater than %d", n1, n2);
			break;
		case 1:
			printf("%d is greater than %d", n2, n1);
			break;
	}
	return 0;
}
