#include<stdio.h>
void even(){
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);
    if(num & 1){
        printf("%d is an Odd number", num);
    }
    else{
        printf("%d is an even number", num);
    }
}