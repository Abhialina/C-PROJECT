#include<stdio.h>
int main();
void sum(){
    int n;
    printf("Enter Row and Column : ");
    scanf("%d", &n);

    int a[n][n], b[n][n],c[n][n];
    printf("Enter elements of 1st matrix : ");
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter elements of 2nd matrix : ");
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            scanf("%d", &b[i][j]);
        }
    }
    printf("Sum of both matrix : ");
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%4d", a[i][j] + b[i][j]);
        }
        printf("\n");
    }
}

void diff(){
    
}

void multi(){

}

void matrix(){
    int choice;
    while(1){
        printf("\n---MATRIX---\n");
        printf("1.Sum\n");
        printf("2.Difference\n");
        printf("3.Multiplication\n");
        printf("4.Adjoint of matrix\n");
        printf("5.Lower triangular matrix\n");
        printf("6.\n");
        printf("0.Back\n");
        printf("Enter choice : ");
        scanf("%d", &choice);

        switch(choice){
            case 1 : sum();
                break;
            case 2 : diff();
                break;
            case 3 : multi();
                break;
            case 0 : main();
                break;
            default : printf("Enter valid options!");
                break;
        }
    }
}