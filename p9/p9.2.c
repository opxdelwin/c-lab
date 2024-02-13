#include<stdio.h>

int main (void) {

	int number = 0;
	
	printf("Enter a number: ");
	scanf("%d", &number);
	
	for (int i = 2; i < number; i++) {
	
		if(number % i == 0) {
			printf("%d is not a prime number. \n", number);
			return 0;
		}
	
	}
	
		printf("%d is a prime number.\n", number);
	
		
	

	return 0;
}
