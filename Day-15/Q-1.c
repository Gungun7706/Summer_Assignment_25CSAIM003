#include<stdio.h>
int main(){
    int n;int temp;
    printf("Enter the size of an array:");
    scnaf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("arr[%d]:",i);
        scanf("%d",arr[i]);}
        int left=0,right=n-1;
        while(left<right)
         temp=arr[ left];
        arr[ left]=arr[right];
         arr[right]=temp;
left++;
right--;
        printf("Reversed array:");
        for(int i=0;i<n;i++){
        printf("%d",arr[i]);}

        printf("\n");

        return 0;
        



    }
