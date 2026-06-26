#include<stdio.h>
void bubblesort(int n,int arr[]){
    if(n==1) return;
    for(int j=0;j<n-1;j++){
        if(arr[j]>arr[j+1]){
        int temp= arr[j];
arr[j]=arr[j+1];
arr[j+1]=temp;

        }
    }
 bubbleSort(arr, n - 1);
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    bubbleSort(arr, n);

    printf("Sorted Array: ");
    printArray(arr, n);

    return 0;
}


