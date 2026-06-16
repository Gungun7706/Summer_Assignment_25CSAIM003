#include<stdio.h>
int main(){
     int i,digit,reverse=0,n;
    printf("Enter the number");
    scanf("%d",&n);
    int original=n;
    while(n!=0)
    {

        digit=n%10;
        reverse=reverse*10+digit;

        n=n/10;
        

    }
    printf("Enter the palindrom number:%d",reverse);
    

if(original==reverse){
    printf("It is a palindrome number");

}
else{
    printf("It is not a palindrome number");

}
return 0;

}

 
