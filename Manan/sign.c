#include <stdio.h>
int main () {
	int i;
	printf("Enter a number: ");
	scanf("%d", &i);
	switch(i>=0) {
		case 0:
			printf("Negative");
			break;
		case 1:
			if (i>0) {
				printf("Positive");
			}
			else {
			printf("Zero");	
			}			
			break;
	}
return 0;
}
