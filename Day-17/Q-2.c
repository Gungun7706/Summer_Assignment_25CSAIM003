#include<stdio.h>
int main(){
    int n1,n2;
    printf("Enter the siz of the first array:");
    scanf("%d",&n1);

    int arr1[n1];
    for(int i=0;i<n1;i++)
    {
        printf("arr[%d]:",i);
        scanf("%d",&arr1[i]);
    }


    printf("Enter the size of second array:");
    scanf("%d",&n2);

    int arr2[n2];
    for(int i=0;i<n2;i++)
    {
        printf("arr[%d]:",i);
        scanf("%d",&arr2[i]);

    }
    int uni[n1+n2];
int m=0;
for(int i=0;i<n1;i++)
{
    uni[m++]=arr1[i];


}
for(int i=0;i<n2;i++){
    int found=0;
    for(int j=0;j<n1;j++)
    {
        if(arr2[i]==arr1[j]){
            found=1; break;

        }

    }
    if(!found){
        uni[m++]=arr2[i];

    }
}

printf("\n Union of array is :");
for(int i=0;i<m;i++)
{
    printf("%d",uni[i]);

}
printf("\n");

return 0;

}