#include<stdio.h>
void factor(){
    int n;
    printf("Enter number : ");
    scanf("%lld", &n);
    
    for(int i = 1; i <= n; i++){
        if(n % i == 0){
            printf("%d  ", i);
        }
    }
}