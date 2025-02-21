#include<stdio.h>
void multi(){
    int x, y, n, m;
    printf("Enter Row and Column of 1st matrix : ");
    scanf("%d%d", &x,&y);
    printf("Enter Row and Column of 2nd matrix : ");
    scanf("%d%d", &n, &m);
    int a[x][y], b[n][m], c[x][m], i, j,k;
    if(y == n){
    printf("Enter elements of 1st matrix : \n");
    for(i = 0; i < x; i++){
        for(j = 0; j < y; j++){
            printf("Enter elements [%d][%d] : ", i,j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter Elements of 2nd matrix : \n");
    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            printf("Enter elements [%d][%d] : ", i,j);
            scanf("%d", &b[i][j]);
        }
    }

    for(i = 0; i < x; i++){
        for(j = 0; j < m; j++){
            c[i][j] = 0;
            for(k = 0; k < n; k++){
                c[i][j] += a[i][k] * b[k][j];
            }
            printf("%4d", c[i][j]);
        }
        printf("\n");
    }
    }
    else{
        printf("Multiplication of matrices is not possible!");
    }

}
