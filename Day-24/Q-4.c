#include<stdio.h>
int main(){
     char str[100];int dup[256]={0};
    int len=0;
    printf("Enter the string:");
    scanf("%s",str);
     while(str[len]!='\0'){
        len ++;
    } 
    printf("Enter the length of the string:%d\n",len);
    char result[100];
    int j=0;
    int i=0;while(i<len){
        if(dup[str[i]]==0){
            result[j]=str[i];
            j++;
            dup[str[i]]=1;
        }
        i++;


    }
    result[j]='\0';
    printf("After removing duplicates:%s\n",result);
    return 0;
}