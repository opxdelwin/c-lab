#include<stdio.h>

int main(void) {

	int num, f, l;
	
	printf("input a 6 digit number: ");
	scanf("%d", &num);
	
	f = num / 100000;
	l = num % 10;

	printf("Sum of first and last digit: %d \n", f+l);

	return 0;
}
