#include<stdio.h>
void main()
{
    int a, n1, digit, rev=0;
    printf("Enter a number: ");
    scanf("%d", &a);
    n1=a;
    while (a>0)
    {
        digit = a%10;
        rev= (rev*10)+ digit;
        a= a/10;
    }
    printf("the reverse of %d is %d\n", n1, rev);
}