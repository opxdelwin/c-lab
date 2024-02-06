#include<stdio.h>

int main(void) {
	int sec;
	int hour = 0;
	int min = 0;

	printf("Input time value in seconds: ");
	scanf("%d", &sec);

	hour = sec / 3600;
	min = (sec % 3600) / 60;
	sec = sec - (hour * 3600) - (min * 60);
	
	printf("hour: %d ; min: %d ; sec: %d \n", hour, min, sec);


	return 0;
}
