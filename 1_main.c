#include<stdio.h>
#include<stdlib.h>
#include "2_swap.c"
#include "3_even.c"
#include "4_matrix.c"
#include "5_calculator.c"

int main(){
    int choice;
    while(1){
        printf("\n----MAIN MENU----");
        printf("\n1.Swapping\n");
        printf("2.Even or Odd\n");
        printf("3.Matrix\n");
        printf("4.Calculator\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice){
        case 1 : swap();
            break;
        case 2 : even();
            break;
        case 3 : matrix();
            break;
        case 4 : calculator();
            break;
        case 0 : exit(0);
            break;
        default : printf("Enter valid choice!");
            break;
    }
    }

}