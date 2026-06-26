#include <stdio.h>

int binarySearchRecursive(int arr[], int low, int high, int key) {
   
    if (low > high) return -1;

    int mid = (low + high) / 2;

    if (arr[mid] == key) {
        return mid; 
    } else if (arr[mid] < key) {
        return binarySearchRecursive(arr, mid + 1, high, key); 
    } else {
        return binarySearchRecursive(arr, low, mid - 1, key);
    }
}

int main() {
    int n, key;

    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter elements in sorted order:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    int result = binarySearchRecursive(arr, 0, n - 1, key);

    if (result != -1) {
        printf("Element %d found at index %d\n", key, result);
    } else {
        printf("Element %d not found!\n", key);
    }

    return 0;
}
