#include <stdio.h>

int isPrime(int num){
    if (num < 2) 
        return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) 
            return 0;
    }
    return 1;
}

void prime() {
    int n, m;
    printf("Enter the range: ");
    scanf("%d %d", &n, &m);

    printf("Prime numbers between %d and %d are: ", n, m);
    for (int i = n; i <= m; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");

}
