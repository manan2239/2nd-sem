#include <stdio.h>
int add(int n1, int n2);
int sub(int n1, int n2);
int mul(int n1, int n2);
int div(int n1, int n2);
int main () {
	int op, n1, n2;
	printf("Choose an operation(1 for add, 2 for sub, 3 for mul, 4 for div, 5 for exit): ");
	scanf("%d", &op);
	printf("Enter two numbers: ");
	scanf("%d %d", &n1, &n2);
	switch(op) {
		case 1:
			printf("%d",add(n1, n2));
			break;
		case 2:		
			printf("%d",sub(n1, n2));
			break;
		case 3:
			printf("%d",mul(n1, n2));
			break;
		case 4:
			printf("%d",div(n1, n2));
			break;
		case 5:
			printf("ok i am going ok understand");
			break;
		default:
			printf("BadInput");
		
	}
	return 0;
}
int add(int n1, int n2) {
	int a = n1 + n2;
	return a;	
}
int sub(int n1, int n2) {
	int s = n1 - n2;
	return s;	
}
int mul(int n1, int n2) {
	int m = n1 * n2;
	return m;	
}
int div(int n1, int n2) {
	int d = n1 / n2;
	return d;	
}
