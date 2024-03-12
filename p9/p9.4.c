#include <stdio.h>
#include <math.h>

int main(void)
{

    int binary, updatedBinary, iterations = 0;

    printf("Enter binary: \n");
    scanf("%d", &binary);

    while (binary > 0)
    {
        int digit = binary % 10;
        iterations++;

        printf("dig: %d", digit);

        if (digit == 1)
        {
            updatedBinary *= 10;
            continue;
        }
        else
        {
            updatedBinary += pow(10, iterations);
            continue;
        }
    }

    printf("Updated: %d", updatedBinary);

    return 0;
}