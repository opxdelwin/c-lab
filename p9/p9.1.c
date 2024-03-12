#include <stdio.h>
#include<math.h>


int main(void)
{

    int number = 0;
    int first, last, iterations = 0;
    int midnumber;


    printf("Enter a number: ");
    scanf("%d", &number);

    last = number % 10;

    number = number / 10;
    midnumber = number;
    iterations++;

    while (number > 0)

    {
        iterations++;
        first = number % 10;
        number = number / 10;
    }

    midnumber = midnumber % (int) pow(10, (iterations - 2));

    number = (pow(10, iterations -1 ) * last) + first + (midnumber * 10);
    printf("Swapped: %d", number);

    return 0;
}