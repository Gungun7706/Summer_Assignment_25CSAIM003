#include<stdio.h>
int main(){
    int a=0,b=1,n,i,next;
    printf("enter the number:");
    scanf("%d",&n);
    if(n==0)
    printf("the fibbonnacci term is :%d\n",&a);
    else if(n==1)
  {
     printf("The fibbonancci term  is:%d\n",&b);
  }
  else
  for(i=2;i<=n;i++)
  {
    next=a+b;
    a=b;
    b=next;

  }
  printf("Fibbonnacci term is:%d\n",b);

  return 0;

}