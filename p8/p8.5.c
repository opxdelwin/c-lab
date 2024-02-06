#include<stdio.h>
void main()
{
    int a, sum=0, digit, n1=0;
    printf("ENter a number: ");
    scanf("%d", &a);
    n1=a;
    while (a>0)
    {
        digit = a%10;
        sum= sum + digit;
        a = a/10;
    }
    printf("Sum of digit s of %d is %d\n",n1, sum );
}