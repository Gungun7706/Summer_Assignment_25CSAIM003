#include<stdio.h>
int main(){
    int str1[100],str2[100],len=0;int combined[100];
    printf("Enter the first string");
    scanf("%s",str1);
    printf("Enter the second string");
    scanf("%s",str2);
    int len1=strlen(str1);
    int len2=strlen(str2);if(len1!=len2){
        printf("there is no rotation");

    }
    strcpy(combined, str1);
    strcat(combined, str1);
int found = 0;
    int i = 0;
    int combinedLen = strlen(combined);
 while(i <= combinedLen - len2){
        int j = 0;
        while(j < len2 && combined[i+j] == str2[j]){
            j++;
        }
        if(j == len2){  
            found = 1;
            break;
        }
        i++;}
 if(found){
        printf("Yes, it is a rotation");
    } else {
        printf("Not a rotation");
    }

    return 0;
}
