#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int arr[n];
    printf("The elemnet of array are:%d",n);
    for(int i=0;i<n;i++)
    {
        printf("arr[%d]:",i);scanf("%d",&arr[i]);

    }
    int first=arr[0],second=arr[0];
    for(int i=0;i<n;i++){
if(arr[i]>first){
    second=first;
    first=arr[i];
}
if(arr[i]>second&&arr[i]!=first)
{
    second=arr[i];

}
} printf("The second largest element in array is:%d",second);

return 0;


    }
