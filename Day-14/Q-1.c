#include<stdio.h>
int linearsearch(int arr[],int size,int element){
for(int i=0;i<=size;i++)
{
    if(arr[i]==element)
    return i;
    
    return -1;

}

}

int main(){

   int n;
    printf("enter the size of the array:");
    scanf("%d",&n);

    int arr[n];
printf("The elements of array aree\n:",n);
for(int i=0;i<n;i++)
{printf("arr[%d]:",i);

scanf("%d",&arr[i]);}
int size =sizeof(arr)/sizeof(arr[0]);

int element;

printf("Enter the element to be found:");
scanf("%d",&element);

int result=linearsearch(arr,size,element);

if(result!=-1)
printf("Element%dis found on %d index",element,result);
else printf("Element not found");

return 0;



}