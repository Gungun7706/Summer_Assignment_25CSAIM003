#include<stdio.h>
int main(){
    int i,digit,sum=0,n;
    printf("Enter the number");
    scanf("%d",&n);

    if(n==0){
        sum=0;

    }
    while(n!=0)
    {

        digit=n%10;
        sum=sum+digit;

        n=n/10;
        

    }

  


   printf("The sum of the digits are:%d\n",sum);


   return 0;

}