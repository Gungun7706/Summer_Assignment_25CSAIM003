#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int arr[n];
    printf("The elements of the array are\n:%d",n);
    for(int i=0;i<n;i++)
   { printf("arr[%d]",i);
    scanf("%d",&arr[i]);}
int target;
printf("Element to be found:");
scanf("%d",&target);
int count=0;
for(int i=0;i<n;i++)
{
    if(arr[i]==target){
       
        count++;

    }
} printf("Frequency to be found:%d",count);
return 0;

}