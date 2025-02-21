#include<stdio.h>
#include "4_multi_matrix.h"
int main();

int input(int n, int mat[n][n], char *ch){
    printf("Enter Elements of %s matrix :\n", ch);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("Enter elements [%d][%d] : ", i,j);
            scanf("%d", &mat[i][j]);
        }
    }
}
int sum(int n){
    int a[n][n], b[n][n], c[n][n];
    input(n, a, "1st");
    input(n, b, "2nd");
    printf("Sum of matrices : \n");
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            c[i][j] = a[i][j] + b[i][j];
            printf("%4d", c[i][j]);
        }
        printf("\n");
    }

}
int diff(int n){
    int a[n][n], b[n][n], c[n][n];
    input(n, a, "1st");
    input(n, b, "2nd");
    printf("Difference of matrices  : \n");
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            c[i][j] = a[i][j] - b[i][j];
            printf("%4d", c[i][j]);
        }
        printf("\n");
    }
}
// int multi(int n){
//     int a[n][n], b[n][n], c[n][n];
//     input(n, a, "1st");
//     input(n, b, "2nd");
//     printf("Multiplication of matrices : \n");
//     for(int i = 0; i < n; i++){
//         for(int j = 0; j < n; j++){
//             c[i][j] = 0;
//             for(int k = 0; k < n; k++){
//                 c[i][j] += a[i][k] * b[k][j];
//             }
//             printf("%4d", c[i][j]);
//         }
//         printf("\n");
//         }
// }
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
        int n;
        if(choice == 1 || choice == 2){
            printf("Enter size of matrix(nXn) : ");
            scanf("%d", &n);
        }
        switch(choice){
            case 1 : sum(n);
                break;
            case 2 : diff(n);
                break;
            case 3 : multi(n);
                break;
            default : printf("Enter valid option!");
                break;
        }

    }
}