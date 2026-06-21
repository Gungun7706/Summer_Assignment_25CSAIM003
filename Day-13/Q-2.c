#include<stdio.h>
int main(){

    int i,n;
    printf("Enter the size of an array\n:");
    scanf("%d",&n);

    int arr[n]; int sum=0;
    printf("The elements of an array are:");
for(i=0;i<n;i++){
    printf("arr[%d]:",i);
    scanf("%d",&arr[i]);
     sum =sum+arr[i];
    
}float avg=(float)sum/n;
    printf("\n The elements of an array\n:");
    for(i=0;i<n;i++){
        printf("%d",arr[i]);}
       printf("\n sum: %d",sum);
       printf("\n Average:%.2f ",avg);

    
    return 0;

}
