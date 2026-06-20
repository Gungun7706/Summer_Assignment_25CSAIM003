#include<stdio.h>
int perfect(int n)
{
    int sum=0;
    for(int i=1;i<n;i++){
        if(n%i==0)
        sum=sum+i;

    }

if(sum==n)
printf("it is a perfect square");
else printf("not a perfect square");
return 0;
}
int main(){
    int a; scanf("%d",&a);
    perfect(a);
    return 0;
    
}