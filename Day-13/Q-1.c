#include<stdio.h>
int main(){
    int n;
    printf("enter the szie of an array:");
    scanf("%d",&n);
int arr[n];
int i;
    for (i = 0; i <n; i++)
    {
        printf("arr[%d]:  ",i);
        scanf("%d",&arr[i]);

    }
    printf("Array elements are:");
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    } return 0;
    
}