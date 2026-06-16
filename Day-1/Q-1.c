#include<stdio.h>
int main()
{
    int n,sum,i;
    printf("Enter the integer number:");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        sum=sum+i;

    }

    printf("Sum of integr number is:%d",sum);

    return 0;

}