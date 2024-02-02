#include <stdio.h>

int main(void)
{

    char inp;

    printf("Enter a character: ");
    scanf("%c", &inp);

    if (inp >= 97 && inp <= 122)
    {
        printf("The uppercase of the entered letter is: %c\n", inp - 32);
    }
    else 
    {
        printf("The entered letter is not in lowercase\n");
    }

    return 0;
}