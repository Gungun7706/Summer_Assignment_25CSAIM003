#include<stdio.h>
int main(){
    int n,digit,product=1;
    printf("Enter the digit");
    scanf("%d",&n);
    while(n!=0){
        digit=n%10;
        product=product*digit;
        n=n/10;

    }

    printf("The sum of the digit is:%d",product);

    return 0;

}