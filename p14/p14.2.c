#include<stdio.h>

int factorial(int num) {
    if(num == 1) {
        return 1;
    }
    return num * factorial(num - 1);
}

int main(void) {
    int num = factorial(8);
    printf("Num: %d\n", num);
    return 0;
}