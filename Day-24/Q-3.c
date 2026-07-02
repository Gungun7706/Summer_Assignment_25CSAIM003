#include<stdio.h>
int main(){
     char str[100];
    int len=0;
    printf("Enter the string:");
    scanf("%s",str);
     while(str[len]!='\0'){
        len ++;
    } 
    printf("Enter the length of the string:%d\n",len);
    int len=strlen(str);
    if(str[len-1]=='\n'){
        str[len-1]='\0';len--;
    }
    char longword[100]="";
    char word[100];
    int wordIndex = 0;
    int maxLen = 0;
 int i = 0;
    while(i <= len){
       
        if(str[i] == ' ' || str[i] == '\0'){
            word[wordIndex] = '\0';   

            if(wordIndex > maxLen){          
                maxLen = wordIndex;
                strcpy(longword,word);
            }

            wordIndex = 0;  
            word[wordIndex] = str[i];
            wordIndex++;
        }
        i++;
    } printf("Longest word is: %s (length = %d)", longword, maxLen);
 return 0;
}
