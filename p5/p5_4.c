#include<stdio.h>

int main (void) {

	int num, first, second, third;
	
	printf("input 3 digit number: ");
	scanf("%d", &num);
	
	first = (num % 1000 ) / 100;
	second = (num % 100) / 10;
	third = num % 10;
	
	printf("sum of 3 digits: %d \n", first  + second + third);
	

	return 0;

}
