#include<stdio.h>

int main (void) {

    int arr_size;
    printf("Enter array size: ");
    scanf("%d", &arr_size);

    int array[arr_size];
    int largest = 0;

    for (int i = 0; i < arr_size; i++) {
        int input;
        printf("Enter content for index %d: ", i);
        scanf("%d", &input);

        array[i] = input;
        if(largest < array[i]) {
            largest = array[i];
        }
    }

    printf("Largest of array contents: %d\n", largest);

    return 0;
}