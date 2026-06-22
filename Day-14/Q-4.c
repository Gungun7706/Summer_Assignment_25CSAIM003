#include<stdio.h>
int main(){
    int n;
    printf("Enter the sizee of array:");
    scanf("%d",&n);
    int arr[n];
    printf("The elements of array are:%d\n",n);

    for(int i=0;i<n;i++)
    {
        printf("\n arr[%d]:",i);
        scanf("%d",&arr[i]);


    }
    for(int i=0;i<n;i++)
{
for(int j=0;j<n;j++)
{if(arr[i]==arr[j]&&i!=j){
    printf("duplicate:%d",arr[i]);
    break;}
    

}
}return 0;

}