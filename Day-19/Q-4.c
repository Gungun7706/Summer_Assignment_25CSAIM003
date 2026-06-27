#include<stdio.h>
int main(){
     int x,y;
    printf("Enter the row and the columne of the matrix:");
    scanf("%d ",&x);
    int A[x][x];
    printf("The elements of matrix A is");
    for(int i=0;i<x;i++){
        for(int j=0;j<x;j++){
            printf("A[%d][%d]:",i,j);
            scanf("%d ",&A[i][j]);
        }
    }
    int right=0,left=0;
for(int i=0;i<x;i++){
    right +=A[i][i];
    left +=A[i][x-1-i];

}
 printf("\nMatrix:\n");
    for(int i = 0; i < x; i++){
        for(int j = 0; j < x; j++)
            printf("%4d", A[i][j]);
        printf("\n");
    }
    
    printf("\nPrimary Diagonal sum   = %d", right);
    printf("\nSecondary Diagonal sum = %d\n", left);
    
    return 0;
}