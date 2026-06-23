#include<stdio.h>
int main(){
    int n; scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("arr[%d]",i);scnf("%d",arr[i]);

    }
    int k; scanf("%d",&k);

    k=k%n;int left=0,right=n-1,temp;
    for (int i = 0; i < k; i++) {
        temp = arr[n - 1];       
        for (int j = n - 1; j >= 1; j--) {
            arr[j] = arr[j - 1]; 
        }
        arr[0] = temp; 
        
        printf("After %d right rotation(s): ", k);
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
return 0;
    }
}