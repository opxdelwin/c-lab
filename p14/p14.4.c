#include<stdio.h>
void sequence(int start, int end) {
    if (start > end) {
        printf("\n");
        return;
    }
    printf("%d    ", start);
    sequence(start + 2, end);
}

int main(void) {
    int start = 0, end = 0;

    printf("Enter start & end: ");
    scanf("%d %d", &start, &end);

    printf("\n");
    sequence(start, end);

    return 0;
}