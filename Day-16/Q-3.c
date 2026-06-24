#include<stdio.h>
int main(){
    int n;printf("Enter the size:");scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
{
    printf("arr[%d]:",i);scanf("%d",arr[i]);

}
int target;
printf("Enter the target:");
scanf("%d",&target);
int found=0;
for(int i=0;i<n-1;i++)
{
    for(int j=i+1;j<n;j++){
if(arr[i]+arr[j]==target)
{
    printf("%d + %d =%d\n",arr[i],arr[j],target);
    found=1;

}
    }
}
if(found==0)
{
    printf("no pair is found");

}

return 0;







}