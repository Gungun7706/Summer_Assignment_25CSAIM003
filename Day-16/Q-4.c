#include<stdio.h>
int main(){
    int n;printf("Enter the size:");scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
{
    printf("arr[%d]:",i);scanf("%d",arr[i]);

}
int result[n];
    int resSize = 0; 

    for(int i = 0; i < n; i++) {

        int isDuplicate = 0;
        for(int j = 0; j < resSize; j++) {
            if(result[j] == arr[i]) {
                isDuplicate = 1;  
                break;
            }
        }

       
        if(isDuplicate == 0) {
            result[resSize] = arr[i];
            resSize++;
        }
    }

   
    printf("Array after removing duplicates:\n");
    for(int i = 0; i < resSize; i++) {
        printf("%d ", result[i]);
}
printf("\n");

return 0;

}
