#include<stdio.h>

void swap(){
    int a,b;
    printf("Enter a number : ");
    scanf("%d%d", &a,&b);
    
    printf("Before Swapping : a = %d and b = %d\n", a,b);
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    printf("After Swapping : a = %d and b = %d\n", a, b);
}