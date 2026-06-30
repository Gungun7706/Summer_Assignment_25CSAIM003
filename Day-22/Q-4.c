#include<stdio.h>
#include<string.h>
int main(){
    char str[100];int len =0;int j=0;
    printf("Enter the string:");
    scanf("%[^\n]s",str);
    while(str[len]!=0){
        len++;

    }
    for(int i=0;i<len;i++){
        if(str[i]!=' '){
            str[j]=str[i];
            j++;

        }

    }
    str[j]='\0';
    printf("String after spaces:%s\n",str);
    return 0;
}