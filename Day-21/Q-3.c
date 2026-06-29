#include<stdio.h>
int main(){
int str[100];int vowel=0,consonent=0;
printf("Enter the string");
scanf("%s",&str);
for(int i=0;str[i]!='\0';i++){
    char ch=str[i];


if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
vowel++;

}
else if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z')){

consonent++;

}

}
printf("Vowels are:\n",vowel);
printf("Consonents are:\n",consonent);

return 0;


}