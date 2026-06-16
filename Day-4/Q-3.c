#include<stdio.h>
int main(){
    int n,temp,r=0,d;
    printf("Enter the numberr");
    scanf("%d",&n);
temp=n;    
       while(n>0){
d=n%10;
   r=(n*n*n)+r;
    n=n/10;
    }
if(temp==r)
{
    printf("Armstrong number");

}
else{
    printf("Not an armstrong number");

}
return 0;

}