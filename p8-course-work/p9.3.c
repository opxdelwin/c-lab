#include<stdio.h>

int main (void) {

	int first = 0;
	int second = 1;
	int n = 0;
	
	printf("Enter starting number: ");
	scanf("%d", &first);

	printf("Enter length of series: ");
	scanf("%d", &n);

	printf("%d %d ", first, second);

	for (int i = 0; i <= n ; i++) {
		int third = first + second;
		printf("%d ", third);
		
		first = second;
		second = third;
	}


	return 0;
}
