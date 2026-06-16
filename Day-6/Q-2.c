#include<stdio.h>

#include <math.h>
int main() {
    long n;
    int dec = 0, i = 0, rem;
    scanf("%ld", &n);
    while(n != 0) {
        rem = n % 10;
        dec += rem * pow(2, i);
        n /= 10;
        i++;
    }
    printf("%d", dec);
    return 0;
}

