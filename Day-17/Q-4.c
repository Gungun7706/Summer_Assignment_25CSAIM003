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
    printf("\nCommon Elements: ");
    int found = 0; 
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            if (arr1[i] == arr2[j]) {
                printf("%d ", arr1[i]);
                found = 1;
                break;
            }
        }
    }

    if (!found) {
        printf("No common elements found!");
    }

    printf("\n");
    return 0;
}