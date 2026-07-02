#include<stdio.h>
int main(){
    char str[100];int result[100];
    int len=0;int i=0,j=0;
    printf("Enter the string:");
    scanf("%s",str);
     while(str[len]!='\0'){
        len ++;
    } 
    printf("Enter the length of the string:%d\n",len);
while(i<len){
    char CHAR=str[i];
    int count=1;
    while(i+1<len&&str[i+1]==CHAR){
        count++;
        i++;

    }
    result[j]=CHAR;
    j++;char countstr[10];
    printf(countstr,"%d",count);
    int k=0;
    while(countstr[k] != '\0'){
            result[j] = countstr[k];
            j++;
            k++;
        } i++; }
result[j] = '\0';  
    printf("Compressed string: %s\n", result);
    return 0;

}
