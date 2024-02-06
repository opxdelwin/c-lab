#include<stdio.h>

int main(void) {

	int meter;
	int kms;
	
	printf("Enter distance in meters: ");
	scanf("%d", &meter);
	
	kms = meter / 1000;
	meter = meter - (kms * 1000);
	
	printf("Distance in Kilometers: %d ; Meters: %d \n", kms, meter);
	
	return 0;
}
