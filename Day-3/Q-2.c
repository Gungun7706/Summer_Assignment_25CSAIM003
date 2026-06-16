#include<stdio.h>
int main(){
    int start,end,i,j,isprime;
    printf("Enter the lower limit:");
    scanf("%d",&start);
    printf("Enter the upper limit:");
    scanf("%d,&end");
    printf("Prime numbers between %d and %d are:",start,end);
    for(i=start;i<=end;i++){
        isprime=1;

    }
if(i<2)
{
    isprime=0;

}
for(j=2;j<i;j++)
{
    if(i%j==0)
    {
        isprime=0;
        break;

    }
}
if(isprime==1){
    printf("%d",i);

}
 return 0;
 


}
