#include<stdio.h>
int main(){
    int str1[100],str2[100],len=0;int count[256]={0};
    printf("Enter the first string");
    scanf("%s",str1);
    printf("Enter the second string");
    scanf("%s",str2);
    int len1=strlen(str1);
    int len2=strlen(str2);
    if(len1!=len2){
        printf("It is not anagram");
    }
    int i=0;
    while(i<len1){
        count[str1[i]]++;
         i++;
    }
 i=0;
    while(i<len2){
        count[str2[i]]--;
        i++;
    }int Anagram = 1;
    i=0;
    while(i<256){
        if(count[i] != 0){
            Anagram = 0;
            break;
        }
        i++;
    } if(Anagram){
        printf("Anagram hai!\n");
    } else {
        printf("Anagram nahi hai.\n");
    }

    return 0;
}
