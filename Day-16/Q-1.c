#include<stdio.h>
int main(){
    int n; printf("Enter totle number:");
    scanf("%d",&n);
int arr[100];

    for(int i=0;i<n-1;i++){
scanf("%d",&arr[i]);}
int expectedsum =n*(n+1)/2;
int actualsum=0;
for(int i=0;i<n;i++){
    actualsum=+arr[i];}
    int missing=expectedsum-actualsum;
    printf("The missing number is:%d\n",missing);

    return 0;

}
