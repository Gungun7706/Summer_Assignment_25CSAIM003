#include<stdio.h>
int main(){
     int x;
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

    int symmetric =1;
    for(int i=0;i<x;i++){
        for(int j=0;j<x;j++){
            if(A[i][j]!=A[j][i]){
                symmetric =0;
                break;
            }
        }
    }

    if(symmetric){
        printf("It is symmetric matrix");
    }
    else{printf("it is not a symmetric matrix");
    }
    return 0;
}