#include<stdio.h>
#include<stdlib.h>
#include "2_swap.c"
#include "3_even.c"
#include "4_matrix.c"

int main(){
    int choice;
    while(1){
        printf("\n1.Swapping\n");
        printf("2.Even or Odd\n");
        printf("3.Matrix\n");
        printf("4. \n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice){
        case 1 : swap();
            break;
        case 2 : even();
            break;
        case 3 : matrix();
            break;
        case 5 : exit(0);
        default : return 0;
            break;
    }
    }
}