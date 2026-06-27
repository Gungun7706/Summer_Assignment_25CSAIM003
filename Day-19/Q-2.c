#include<stdio.h>
int main(){
      int x,y;
    printf("Enter the row and the columne of the matrices:");
    scanf("%d %d",&x,&y);
    int A[x][y],B[x][y],C[x][y];
    printf("The elements of matrix A is");
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            printf("A[%d][%d]:",i,j);
            scanf("%d ",&A[i][j]);
        }
    }

    printf("The element of matrix B is:");
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            printf("B[%d][%d]:",i,j);
            scanf("%d ",&B[i][j]);
        }
    }

    printf("The elements of matrix C are:");
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            C[i][j]=A[i][j]-B[i][j];

        }
    }
    printf("\nMatrix A:\n");
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++)
            printf("%4d", A[i][j]);
        printf("\n");
    }
    
    printf("\nMatrix B:\n");
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++)
            printf("%4d", B[i][j]);
        printf("\n");
    }
printf("\n The matrix C = A-B\n");
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            
            printf("%4d",C[i][j]);

        }
        printf("\n");
    }
    printf("\n");

    return  0;

}