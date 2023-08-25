#include <stdio.h>
// call by value
/*
void change(int x) {
	x = 20;
}
int main () {
	int num = 10;
	change(num);
	printf("num: %d", num);
	return 0;
}
*/
// call by reference 

void change(int *x) {
	*x = 20;
}
int main () {
	int num = 10;
	change(&num);
	printf("num: %d", num);
	return 0;
}





