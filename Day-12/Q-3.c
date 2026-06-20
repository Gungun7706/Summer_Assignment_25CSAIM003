#include<stdio.h>
int fib(int a){
    if(a==0||a==1)
        return a;
        else return fib(a-1)+fib(a-2);

}
int main(){
    int a; scanf("%d",&a);
    fib(a);
    return 0;
    
}