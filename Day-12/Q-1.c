#include<stdio.h>
int palindrome(int a,int temp)
{ int d=0;


    

while(temp!=0)
{


    int r= temp%10;
    int d=d*10+r;
    temp=temp/10;
}
if (a == d)
printf("Palindrome");
else printf("Not Palindrome");


     return 0;
}


int main(){

    int a;int temp;
    scanf("%d",&a);
    temp=a;
palindrome(a,temp);

return 0;

}