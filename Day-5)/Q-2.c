#include<stdio.h>
int main(){
    int num,originalnum,sum=0,rem,fact,i;
    printf("Enter the number");
    scanf("%d",&num);
originalnum=num;
while(originalnum!=0)
{

    rem=originalnum%10;
    fact=1;
for(i=0;i<=rem;i++)
fact*=i;
sum += fact;

        originalnum = originalnum / 10;   



}


if(num==sum)
{
    printf("Strong number");
}
else printf("not a strong number");

return 0;


}