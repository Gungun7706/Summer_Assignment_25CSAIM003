#include<stdio.h>
void fastexpo(int x,int n){
    int ans=1;
while (n>0)
{
    int lastbit=n&1;
    if(lastbit)
    {
        ans=ans*x;

    }
    x=x*x;
    n=n>>1;
}
printf("%d\n",ans);

}
int main()
{int x,n;

    scanf("%d",x);
scanf("%d",n);

fastexpo(x,n);

return 0;

}