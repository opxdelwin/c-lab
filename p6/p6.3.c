#include <stdio.h>

int main(void)
{

    int a, b, c;
    printf("Input three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b && a > c)
    {
        printf("Larger number is %d\n", a);
    }
    if (b > c && b > a)
    {
        printf("Larger number is %d\n", b);
    }
    if (c > b && c > a)
    {
        printf("Larger number is %d\n", c);
    }
    else
    {
        printf("Incorrect config");
    }

    return 0;
}