#include<stdio.h>
int main(){
    int n, start,end,i,rem,sum,r=0,d,j;
   
    printf("Enter the lower limit");
    scanf("%d",&start);
    printf("Enter the upper end");
    scanf("%d",&end);

    printf("The range %d and %d is :\n",start,end);

    for(i=start;i<=end;i++){
n=i;
r=0;
while(n!=0)
{
    n=n/10;
    n++;

}
n=i;
sum=0;
while(n!=0){
    rem=n%10;
    d=1;
    for(j=0;j<n;j++)
    d*=rem;
    sum+=d;
    n=n/10;

}
if(sum==i)
printf("%d",i);
    }
    return 0;
    



}