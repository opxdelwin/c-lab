#include <stdio.h>

int main(void)
{

    int i;

    printf("Input series end: ");
    scanf(" %d", &i);

    for (int n = i; n <= 0 ; n--)
    {
        printf("%d ", n);
        
    }

    return 0;
}