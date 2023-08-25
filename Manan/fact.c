#include <stdio.h>
int fact(int num);
int main() {
	int num, s;
	printf("Enter a number: ");
	scanf("%d", &num);
	s = fact(num);
	printf("%d", s);
	return 0;
		
}
int fact(int num) {
	int i = 1;
	int ans = 1; 
	for (i =1; i <= num; i++) {
		ans *= i;
	}
	return ans;
}

