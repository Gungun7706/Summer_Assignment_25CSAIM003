#include<stdio.h>
int main(){
    int str[100];int len=0;
    int reverse[100];
    printf("Enter the string");
    scanf("%s",&str);
    if(str[len]!='\0'){
len++;
    }
    for(int i=0;i<len;i++){
        reverse[i]=str[len-1-i];


    }

    reverse[len]='\0';

    printf("The reverse string:\n",reverse);

    return 0;

}