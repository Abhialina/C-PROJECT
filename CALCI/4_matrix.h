#include<stdio.h>
#include "4_multi_matrix.h"
int main();

void input(int n, int m, int mat[n][m], char *ch){
    printf("Enter Elements of %s matrix :\n", ch);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            printf("Enter element [%d][%d] : ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
}

int sum(int n, int m){
    int a[n][m], b[n][m], c[n][m];
    input(n, m, a, "1st");
    input(n, m, b, "2nd");
    printf("Sum of matrices : \n");
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            c[i][j] = a[i][j] + b[i][j];
            printf("%4d", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}

int diff(int n, int m){
    int a[n][m], b[n][m], c[n][m];
    input(n, m, a, "1st");
    input(n, m, b, "2nd");
    printf("Difference of matrices  : \n");
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            c[i][j] = a[i][j] - b[i][j];
            printf("%4d", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}

int matrix(){
    int choice;
    while(1){
        printf("\n---MATRIX---\n");
        printf("1.Sum\n");
        printf("2.Difference\n");
        printf("3.Multiplication\n");
        printf("0.Back\n");
        printf("Enter Choice : ");
        scanf("%d", &choice);

        if(choice == 0){
            return main();
        }
        int n, m;
        if(choice == 1 || choice == 2){
            printf("Enter Row and Column of matrix(nXm) : ");
            scanf("%d%d", &n, &m);
        }
        switch(choice){
            case 1 : sum(n, m);
                break;
            case 2 : diff(n, m);
                break;
            case 3 : multi();
                break;
            default : printf("Enter valid option!");
                break;
        }
    }
}