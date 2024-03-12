#include<stdio.h>

int main (void) {

    int arr_size;
    printf("Enter array size: ");
    scanf("%d", &arr_size);

    int array[arr_size];
    int largest = 0;

    int newElement;
    int newLocation;


    for (int i = 0; i < arr_size; i++) {
        int input;
        printf("Enter content for index %d: ", i);
        scanf("%d", &input);

        array[i] = input;
    }

    printf("Enter new element: ");
    scanf("%d", &newElement);

    printf("Enter new element location: ");
    scanf("%d", &newLocation);

    int newArray[arr_size+1];

    for (int i = 0; i < 3 + 1; i++) {
        if (i < newLocation)
        {
            newArray[i] = array[i];
        }
        else if (i = newLocation) {
            printf("for");
            newArray[i] = newElement;
        } else {
            newArray[i] = array[i - 1];
        }
    }

    for (int i = 0; i < sizeof(newArray) / sizeof(newArray[0]); i++) 
    {
        printf("Arr %d: %d", i, newArray[i]);
    }

    return 0;
}