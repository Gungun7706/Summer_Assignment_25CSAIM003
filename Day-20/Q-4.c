#include<stdio.h>
int main(){
    int x, y;
    printf("Enter rows and columns: ");
    scanf("%d %d", &x, &y);

    int a[x][y];
    printf("Enter matrix elements:\n");
    for (int i = 0; i < x; i++)
        for (int j = 0; j < y; j++)
            scanf("%d", &a[i][j]);

    printf("column-wise Sum:\n");
    for (int j = 0; j< x; j++) {
        int sum = 0;
        for (int i = 0; i < y; i++) {
            sum += a[i][j];
        }
        printf("column %d sum = %d\n", j+1, sum);
    }
    return 0;
}