#include<stdio.h>
#include<string.h>
int main(){
    char str[100]; int len =0;int count =0;
    printf("Enter the string:");
    scanf("%[^\n]s",str);
    while(str[len]!=0){
        len++;

    }
    printf("The length of the string:%d\n",len);

    if(len>0){
         count =1;
    }
    for(int i=0;i<len;i++){
        if(str[i]==' '){
            count++;
        }
    }
    printf("Number of words:%d\n",count);
    return 0;


    
}