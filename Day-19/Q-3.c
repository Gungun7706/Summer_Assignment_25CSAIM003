#include<stdio.h>
int main(){
      int x,y;
    printf("Enter the row and the columne of the matrices:");
    scanf("%d %d",&x,&y);
    int A[x][y],tr[x][y];
    printf("The elements of matrix A is");
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            printf("A[%d][%d]:",i,j);
            scanf("%d ",&A[i][j]);
        }
    }
    printf("The element of transpose matrix A:");
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            tr[j][i]=A[i][j];

        }
    }
     printf("\nMatrix A:\n");
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++)
            printf("%4d", A[i][j]);
        printf("\n");
    }
    printf("\nTranspose Matrix is\n");
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++){
            printf("%4d",tr[i][j]);
        }
        printf("\n");

        }

        printf("\n");

        return 0;
        

}