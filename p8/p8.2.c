#include <stdio.h>

int main(void)
{

    int i;

    printf("Input series end: ");
    scanf(" %d", &i);

    for (int n = 0; n <= i; n++)
    {
        printf("%d \n", n);
        
    }

    return 0;
}