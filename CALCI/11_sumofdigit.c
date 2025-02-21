#include<stdio.h>
void main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("%d\n", n % 9 ? n % 9 : n ? 9 : 0);
    printf("%d", (n - 1) % 9 + 1);
}