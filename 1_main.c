#include<stdio.h>
#include<stdlib.h>
#include "2_swap.c"
#include "3_even.c"

int main(){
    int choice;
    while(1){
        printf("1.Swapping\n");
        printf("2.Even or Odd\n");
        printf("3. \n");
        printf("4. \n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice){
        case 1 : swap();
            break;
        case 2 : even();
            break;
        case 5 : exit(0);
        default : return 0;
            break;
    }
    }
    return 0;
}