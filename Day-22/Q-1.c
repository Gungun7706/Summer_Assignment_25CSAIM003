#include<stdio.h>
#include<string.h>
int main(){
    char str[100];int len =0;char reverse[100];
    printf("Enter the string:");
    scanf("%s",str);
    while(str[len]!='\0'){
        len ++;
    } 
    printf("Enter the length of the string:%d\n",len);
    int i;
    for (i = 0; i < len; i++) {
        reverse[i] = str[len - 1 - i];
    }
    reverse[len] = '\0'; 
     
      printf("Reversed string: %s\n", reverse);

    
    if (strcmp(str, reverse) == 0) {
        printf("It is a palindrome\n");
    } else {
        printf("It is not a palindrome\n");
    }

    return 0;
}
   
    