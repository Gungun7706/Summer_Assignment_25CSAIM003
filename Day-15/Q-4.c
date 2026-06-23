#include<stdio.h>
int main()
{
    int n;int temp; scanf("%d",&n);int arr[n];
    for(int i=0;i<n;i++){
        printf("arr[%d]",&i);scanf("%d",arr[i]);

    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0){
            for(int j=i+1;j<n;j++){
                if(arr[i]!=0){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
                break;
                }
            }
        }
    }

    printf("Move zero to end:");
    for(int i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
    printf("\n");

    return 0;
    
}