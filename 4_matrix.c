#include<stdio.h>
void matrix(){
    int a[3][3];
    printf("Enter elements of matrix: \n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            scanf("%d", &a[i][j]);
        }
    }
    printf("Matrix : \n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%4d", a[i][j]);
        }
        printf("\n");
    }
}