#include<stdio.h>
void main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    //printf("%d\n", n % 9 ? n % 9 : n ? 9 : 0);
    printf("%d", (n - 1) % 9 + 1);
}
// #include <stdio.h>
// int sumToSingleDigit(int num) {
//     while (num >= 10) {
//         int sum = 0;
//         while (num > 0) {
//             sum += num % 10;
//             num /= 10;
//         }
//         num = sum;
//     }
//     return num;
// }

// int main() {
//     int num;
//     printf("Enter a number: ");
//     scanf("%d", &num);
    
//     int result = sumToSingleDigit(num);
//     printf("The single-digit sum is: %d\n", result);
    
//     return 0;
// }
