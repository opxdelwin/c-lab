#include<stdio.h>

int main (void) {

	int num = 0, factorial = 1;

	printf("Enter number for factorial: ");
	scanf(" %d", &num);
	
	while (num > 0) {
		factorial *= num;
		num--;
	}
	
	printf("Factoial of the number is: %d", factorial);

	return 0;
}
