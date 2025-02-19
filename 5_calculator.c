#include <stdio.h>
#include<stdlib.h>
int calculator(){
    int choice;
    while(1){

        printf("\n---CALCULATOR---");
        printf("\n1.Sum\n");
        printf("2.Difference\n");
        printf("3.Product\n");
        printf("4.Division\n");
        printf("5.Remainder\n");
        printf("0. Exit\n");
        printf("Enter choice : ");
        scanf("%d", &choice);

    if (choice == 0) {
        //exit(0);
        return  main();
    }

    float a, b;
    printf("Enter 1st number : ");
    scanf("%f", &a);
    printf("Enter 2nd number : ");
    scanf("%f", &b);
    int c = (int)a;
    int d = (int)b;

    switch(choice){

        case 1:

                printf("Sum of %.2f and %.2f is %.2f\n", a, b, a + b);
                break;
            case 2:
                printf("Difference of %.2f and %.2f is %.2f\n", a, b, a - b);
                break;
            case 3:
                printf("Product %.2f and %.2f is %.2f\n", a, b, a * b);
                break;
            case 4:
                if (b != 0)
                {
                    printf("Quotient when dividing %.2f by %.2f is %.2f\n", a, b, a / b);
                }
                else
                {
                    printf("Not Defined!\n");
                }
                break;
            case 5:
                printf("Remainder is %d\n", c % d);
                break;
            default:
                printf("Please Enter Valid Operator");
            }
    }
    }