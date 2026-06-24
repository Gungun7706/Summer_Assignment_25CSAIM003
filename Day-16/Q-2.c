#include<stdio.h>
int main(){
    int n;printf("Enter the size :");
    scanf("%d",&n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        printf("arr[%d]:",i);
        scanf("%d",arr[i]);

    }
    int freq=0;
    int result=arr[0];
    for(int i=0;i<n;i++){
        int count=0;
    for(int j=0;j<n;j++)
    {
        if(arr[i]==arr[j]){
            count ++;
        }
    }
    if(count>freq){
        freq=count;
        result=arr[i];

    }}
    printf("the maximum frequency element:%d\n",result);
    printf("it appears%d times\n",freq);






return 0;

}


