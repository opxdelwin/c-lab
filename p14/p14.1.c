#include<stdio.h>

void naturalNum(int n) {
    if(n > 50) {
        return;
    }
    printf("%d    ", n);
    return naturalNum(n + 1);
}

int main (void) {
    naturalNum(1);
    return 0;
}