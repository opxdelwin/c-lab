#include <stdio.h>

int main(void)
{

    long first = 0, second = 0;
    long n = 0;

    printf("Enter length of fibonacci series: \n");
    scanf("%d", &n);

    while (n > 0)
    {
        n--;
        long third = first + second;
        printf("%d, ", third);

        if (first == 0 && second == 0)
        {
            second++;
            continue;
        }

        first = second;
        second = third;
    }

    return 0;
}