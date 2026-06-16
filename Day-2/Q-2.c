#include<stdio.h>
int main(){
    int i,digit,reverse=0,n;
    printf("Enter the number");
    scanf("%d",&n);
    
    while(n!=0)
    {

        digit=n%10;
        reverse=reverse*10+digit;

        n=n/10;
        

    }
    printf("Enter the reversed number:%d",reverse);
    return 0;
}
