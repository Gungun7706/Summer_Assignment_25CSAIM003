#include<stdio.h>
int main(){
     char str[100];
    int len=0;int count[256]={0};
    printf("Enter the string:");
    scanf("%s",str);
     while(str[len]!='\0'){
        len ++;
    } 
    printf("Enter the length of the string:%d\n",len);
     int i=0;
    while(i<len){
        count[str[i]]++;
        i++;
    }
    int Mcount =0;
    char CHAR=str[0];
    i=0;
    while(i<len){
        if(count[str[i]] > Mcount){
            Mcount = count[str[i]];
            CHAR = str[i];
        }
        i++;
    } printf("Maximum occurring character is:%c(Mcount=%d)", CHAR, Mcount);

    return 0;
}