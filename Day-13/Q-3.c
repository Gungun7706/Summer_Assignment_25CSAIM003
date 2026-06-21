#include<stdio.h>
int main(){

    int i,n;
    printf("Enter the size of an array\n");
    scanf("%d",&n);

    int arr[n];
    printf("The elements of an array is:\n ");
    for(i=0;i<n;i++){
    printf("arr[%d]:",i);
    scanf("%d",&arr[i]);
    }
     int large=arr[0];
     int small=arr[0];

     for(i=1;i<n;i++)
     {
        if(arr[i]>large)
        large=arr[i];
        else if(arr[i]<small)
        small=arr[i];

     }
     printf("\n array elements:\n",n);
     for(i=0;i<n;i++)
     printf("%d",arr[i]);

     printf("\nLargest array = %d",large);
     printf("\nThe smallest array =%d",small);

     return 0;

}