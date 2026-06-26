#include <stdio.h>

void Descending(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
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

    printf("Enter elements of array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    Descending(arr, n);

    printf("\nArray in Descending Order: ");
    printArray(arr, n);

    return 0;
}