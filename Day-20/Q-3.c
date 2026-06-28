#include<stdio.h>


int main() {
    int x, y;
    printf("Enter rows and columns: ");
    scanf("%d %d", &x, &y);

    int a[x][y];
    printf("Enter matrix elements:\n");
    for (int i = 0; i < x; i++)
        for (int j = 0; j < y; j++)
            scanf("%d", &a[i][j]);

    printf("Row-wise Sum:\n");
    for (int i = 0; i < x; i++) {
        int sum = 0;
        for (int j = 0; j < y; j++) {
            sum += a[i][j];
        }
        printf("Row %d sum = %d\n", i + 1, sum);
    }

    return 0;
}