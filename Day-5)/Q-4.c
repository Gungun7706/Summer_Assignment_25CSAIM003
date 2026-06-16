#include<stdio.h>
int main(){
    int n,i,largestprime=0;

    scanf("%d",&n);
    for(i=2;i<=n;i++){
        while(n%i==0){
    largestprime=i;
    n=n/10;}
    }
    printf("The largest primefacctor are:%d\n",largestprime);

    return 0;


}