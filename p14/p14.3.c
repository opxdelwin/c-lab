#include<stdio.h>

int sum(int n){
    if(n == 1) {
        return 1;
    }
    return n + sum(n - 1);
}

int main (void) {
    int n;
    printf("Enter num: ");
    scanf("%d", &n);
    printf("Sum till %d: %d\n", n, sum(n));
    return 0;
}