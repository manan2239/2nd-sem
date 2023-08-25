#include <stdio.h>
float ctof(float c) {
	return c*1.8+32;
}
float ftoc(float f) {
	return (f-32)*(5.0/9.0);
}
int main () {
	float temp, f, c;
	int x;
	printf("0 for C-F and 1 for F-C: ");
	scanf("%d", &x);
	printf("Enter Temperature: ");
	scanf("%f", &temp);
	if (x == 0) {
		float resc = ctof(temp);
		printf("C to F: %f", resc);
	}
	else if (x == 1) {
		float resf = ftoc(temp);
		printf("F to C: %f", resf);
	}
	else 
	printf("Invalid Input");

return 0;
}
