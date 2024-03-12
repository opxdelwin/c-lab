#include<stdio.h>

int main (void) {

    int arr_size;
    printf("Enter array size: ");
    scanf("%d", &arr_size);

    int array[arr_size];
    int sum = 0;

    for (int i = 0; i < arr_size; i++) {
        int input;
        printf("Enter content for index %d: ", i);
        scanf("%d", &input);

        array[i] = input;
        sum += array[i];

    }

    printf("Avg of array contents: %d\n", sum/arr_size);

    return 0;
}