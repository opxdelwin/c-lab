#include <stdio.h>

int main(void)
{

    char input;

    printf("Enter a character: ");
    scanf("%c", &input);

    if (input == 'a' || input == 'A' || input == 'e' || input == 'E' || input == 'i' || input == 'I' || input == 'o' || input == 'O' || input == 'u' || input == 'U')
    {
        printf("%c is a vowel\n", input);
    }
    else
    {
        printf("%c is not a vowel\n", input);
    }

    return 0;
}