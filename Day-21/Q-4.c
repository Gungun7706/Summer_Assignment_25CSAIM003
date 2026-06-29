#include<stdio.h>
int main(){
    int str[100];int len=0;char ch;
    printf("Enter the string");
    scanf("%s",&str);
    for(int i=0;str[i]!='\0';i++){
    char ch=str[i];
    if(ch>='a'&&ch<='z')
    ch=ch-32;
    }
    
    printf("The converted letters are:\n",ch);
return 0;
}