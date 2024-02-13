#include<stdio.h>

int main (void) {

	int num = 0, 
	factorial = 1;
	int sum = 0;
	
	printf("Enter strong number: ");
	scanf("%d", &num);
	
	int numCopy = num;
	
	while (num > 0) {
	
		int digit = num % 10;
		for (int i = 1; i <= digit; i++) {
			factorial *= i;
			
		}
		sum += factorial;
		factorial = 1;
		num = num / 10;
	
	}
	
	if (sum == numCopy) {
		printf("%d is a strong number \n", numCopy);
	} else {
		printf("%d is a not strong number \n", numCopy);
	}

	return 0;
}
