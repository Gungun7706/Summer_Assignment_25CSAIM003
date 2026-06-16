#include<stdio.h>
int main(){
    int n,i;
    scanf("%d",&n);
    printf("The fators oof %d are:\n",n);

    for(i=0;i<=n;i++)
    if(n%i==0)
    printf("They are the factors of the nummbers:%d\n",i);

    return 0;
    
}