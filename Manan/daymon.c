#include <stdio.h>
int main () {
	int n;
	printf("Enter the total days of the month: ");
	scanf("%d", &n);
	switch(n) {
		case 28:
		case 29:
			printf("February");
			break;
		case 30:
			printf("April\n");
			printf("June\n");
			printf("August\n");
			printf("October\n");
			printf("December\n");
			break;
		case 31:
			printf("January\n");
			printf("March\n");
			printf("May\n");
			printf("July\n");
			printf("September\n");
			printf("November\n");
			break;
		default:
			printf("Error: Days in any given month are only between 28 and 31.");		
	}
return 0;
}
