#include<stdio.h>
int rev=0;
int reverse(int n){
    int sum=0;
    int original=n;
    while(n>1){
        int r=original%10;
        int rev= rev*10+r;
        reverse(n/10);


    }
    

} 
int main(){
    int n;
    scanf("%d",&n);
    reverse(n);
    
    printf("The reverse of the  number is :%d\n",rev);

    return 0;
}
