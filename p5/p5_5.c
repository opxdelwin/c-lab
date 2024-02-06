#include<stdio.h>

int main(void) {

	float buy, mark, disc;
	
	printf("Enter buying price: ");
	scanf("%f", &buy);
	printf("Enter marking price: ");
	scanf("%f", &mark);
	printf("Enter discount: ");
	scanf("%f", &disc);
	
	float net = (mark * (1-(disc / 100.0))) - buy;

	float buyerprofit = (((buy + net)/buy) * 100) - 100;

	printf("buyer sold at a profit of: %f", buyerprofit);

	return 0;
}
