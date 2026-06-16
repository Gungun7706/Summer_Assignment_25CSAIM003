#include<stdio.h>
int fib(int n){
    if(n==0||n==1)

    return n;
    else
    return fib(n-1)+fib(n-2);

}
int main()
{
    int n;
    printf("Enter the number ");
    scanf("%d",&n);
    fib(n);
    printf("The fibonnaci series is :%d\n",fib(n));

    return 0;
}
