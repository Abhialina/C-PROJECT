#include<stdio.h>
void lcm(){
    int a,b, lcm, hcf;
    printf("Enter two numbers : ");
    scanf("%d%d", &a, &b);
    for(int i = 1; i <= a || i <= b; i++) {
        if( a%i == 0 && b%i == 0 )
           hcf = i;
    }
    lcm = (a * b) / hcf;
    printf("HCF of %d and %d is : %d", a, b, lcm);
}