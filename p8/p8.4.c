#include <stdio.h>

int main(void)
{

    int i = 0, sum = 0;

    while (i < 10)
    {
        int num;
        printf("Input new number: ");
        scanf(" %d", &num);
        sum += num;
        i++;
    }

    printf("Total sum: %d and Avg: %d \n", sum, sum/10);

    return 0;
}