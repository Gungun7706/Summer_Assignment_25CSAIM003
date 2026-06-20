#include<stdio.h>
int armstrong(int a,int temp){
int d=0;

while(a!=0){
int r=a%10;
int d=(r*r*r)+d;
a=a/10;

}
if(temp==d)
printf("Armstrong");
else printf("Not armstrong");

return 0;

}
int main(){
    int a; scanf("%d",&a);
    int temp=a;

    armstrong(a,temp);

    return 0;

}
