#include<stdio.h>
void count(){
    int n ;
    printf("Enter the Number:");
    scanf("%d",&n);
    int count = 0;
    while(n){
        n = n/10;
        count++;
    }
    printf("\nNumber of Digits:%d\n",count);
}