#include<stdio.h>
int sum(int a,int b)
{
   
   return a+b;

}
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    printf("The sum of the given digits are:%d\n",sum(a,b));

    return 0;
    
}
