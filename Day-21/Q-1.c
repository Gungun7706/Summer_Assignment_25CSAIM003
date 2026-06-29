#include<stdio.h>
int main(){
    int str[100];
    int len=0;
    printf("ENter the string");
    scanf("%s",&str);
    if(str[len]!='\0'){
        len++;

    }
    printf("THE lenght of the string is :\n",len);
    return 0;

}