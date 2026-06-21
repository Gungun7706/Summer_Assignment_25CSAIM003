#include<stdio.h>
int main(){
    int n,i;
    printf("Enter the size of an array:");
    scanf("%d",&n);

    int arr[n];
printf("\n Array elemts are:\n");
for(i=0;i<n;i++){
printf("arr[%d]:",i);
scanf("%d",&arr[i]);
}

int even=0;
int odd=0;
for(i=0;i<n;i++)
{
    if(arr[i]%2==0)
    even++;
    else odd++;

}
for(i=0;i<n;i++)
printf("Elements of array aare:%d\n",arr[i]);


printf("\nEven count:%d ",even);
printf("\n Odd count: %d",odd);

return 0;


}