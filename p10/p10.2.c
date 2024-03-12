#include<stdio.h>

int main (void) {

    int arr_size;
    printf("Enter array size: ");
    scanf("%d", &arr_size);

    int array[arr_size];

    for (int i = 0; i < arr_size; i++) {
        int input;
        printf("Enter content for index %d: ", i);
        scanf("%d", &input);

        array[i] = input;
    }

    int sum = 0;

    for (int i = 0; i < sizeof(array) / sizeof(array[0]); i ++) {
        sum += array[i];
    }

    printf("Sum of array contents: %d\n", sum);

    return 0;
}