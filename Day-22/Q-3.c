#include<stdio.h>
#include<string.h>
int main(){
    char str[100];int len =0;int count[300]={0};
    printf("Enter the string:");
    scanf("%s",str);
    while(str[len]!=0){
        len++;

    }
    for(int i=0;i<len;i++){
        
            count[(int)str[i]]++;}
             printf("Character frequencies:\n");
    for (int i = 0; i < 300; i++) {
        if (count[i] > 0) {
            printf("%c : %d\n", i, count[i]);
        }
    }

    return 0;
}
    
