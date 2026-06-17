#include<stdio.h>
int main(){
    int i,j;char ch='A';
    int n=5;

    
    for(i=1;i<=n;i++){

        for(j=1;j<=i;j++)
        {
            printf("%c",ch);
            


        }ch++;
        printf("\n");

    }
    return 0;

}