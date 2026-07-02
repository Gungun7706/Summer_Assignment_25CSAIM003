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
    int found=0;i=0;
    while(i<len){
        if(count[str[i]]==1){
            printf("The first non repeating characters are:%c\n",str[i]);
found=1;
break;
        }
        i++;

    }
    if(!found){
        printf("There is no non-repeating characters:\n");
    }
    return 0;
    
}