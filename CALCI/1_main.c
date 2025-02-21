#include<stdio.h>
#include<stdlib.h>
#include "2_swap.h"
#include "3_even.h"
#include "4_matrix.h"
#include "5_calculator.h"
#include "6_prime.h"
#include "7_quadratic.h"
#include "8_hcf.h"
#include "9_lcm.h"
#include "10_factor.h"
//#include "11_sumofdigit.c"

int main(){
    int choice;
    //hello();
    while(1){
        printf("\n----MAIN MENU----");
        printf("\n1.Swapping\n");
        printf("2.Even or Odd\n");
        printf("3.Matrix\n");
        printf("4.Calculator\n");
        printf("5.Prime\n");
        printf("6.Quadratic Equation\n");
        printf("7.HCF\n");
        printf("8.LCM\n");
        printf("9.Factor\n");
        printf("0.Exit\n");
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
            case 5 : prime();
                break;
            case 6 : quadratic();
                break;
            case 7 : hcf();
                break;
            case 8 : lcm();
                break;
            case 9 : factor();
                break;
            case 0 : 
                    printf("<-----BYE-BYE----->\n");
                    exit(0);
                break;
            default : printf("Enter valid choice!");
                break;
        }
    }

}