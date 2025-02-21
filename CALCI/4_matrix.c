#include<stdio.h>
int main();

int input(int n, int mat[n][n], char *ch){
    printf("Enter Elements of %s matrix :\n", ch);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
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

// multipication of any index 
// multiplication of matrix of ANY INDEX 

int multi(){
    int m , n , p , k ;
    printf("Enter Row Of First matrix:");
    scanf("%d",&m);
    printf("Enter Column Of First matrix:");
    scanf("%d",&n);
    printf("Enter Row Of Second Matrix:");
    scanf("%d",&p);
    printf("Enter Column Of Second Matrix:");
    scanf("%d",&k);
    int array[m][n];
    int array2[p][k];
    if(n != p ){
        printf("Multiplication Not be Possible");
    }
    else{
        printf("\nEnter Element of fist Matrix:\n");
    for(int i = 0;i<m ; i++){
        for(int j  = 0;j<n ;j++){
            printf("Enter %d %d Element:",i+1,j+1);
            scanf("%d",&array[i][j]);
        }
    }
    printf("\nEnter Element of Second Matrix:\n");
    for(int i  = 0 ;i<p ;i++){
        for(int j = 0 ;j<k ; j++){
            printf("Enter %d %d Element:" , i+1,j+1);
            scanf("%d",&array2[i][j]);
        }
    }
    printf("\nFirst Matrix:\n");
    for(int i  = 0;i<m ;i++){
        for(int j  = 0;j<n ;j++){
            printf("%d ",array[i][j]);
        }
        printf("\n");
    }
    printf("\nSecond Matrix:\n");
    for(int i  = 0;i<p ;i++){
        for(int j  = 0;j<k ;j++){
            printf("%d ",array2[i][j]);
        }
        printf("\n");
    }
    int sum[m][k];
    printf("\nMUl\n");
    for(int i =0;i<m ;i++){
        for(int j = 0; j<k ; j++){
            sum[i][j] = 0;
        
        for(int r = 0;r<p ;r++){  //  we can give limit of r for multiplicatio p or n 
            sum[i][j] = sum[i][j] + array[i][r] * array2[r][j];
        }
        }
    }
    for(int i = 0;i< m ; i++){
        for(int j =0;j<k ; j++){
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }

    return 0;
    }
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
        int n;
        if(choice != 3){
        
        printf("Enter Rows and Column : ");
        scanf("%d", &n);
        }
        switch(choice){
            case 1 : sum(n);
                break;
            case 2 : diff(n);
                break;
            case 3 : multi();
                break;
            default : printf("Enter valid option!");
                break;
        }

    }
}