#include<stdio.h>
#include<math.h>
int main();
void roots(){
    float a,b,c,d,r1,r2,real,img;
    printf("Enter Coefficient of quadratic equation : ");
    scanf("%f%f%f", &a, &b, &c);
    d = (b * b) - (4 * a * c);

    if(d == 0){
        r1 = r2 = -b / (2 * a);
        printf("Roots are real aand equal : r1 = %.2f and r2= %.2f", r1,r2);
    }
    else if(d > 0){
        r1 = ( -b - sqrt(d) ) / (2*a);
        r2 = ( -b + sqrt(d) ) / (2*a);
        printf("Roots are real and distinct : r1 = %.2f and r2 = %.2f", r1,r2);
    }
    else{
        real = -b / (2*a);
        img = sqrt(-d) / (2*a);
        printf("Roots are complex and imaginary : \n");
        printf("r1 = %.2f + %.2fi and r2 = %.2f - %.2fi", real,img,real,img);
    }
}
void quadratic(){
    int choice;
    while(1){
        printf("\n---QUADRATIC EQUATION---\n");
        printf("\n1.Find Roots\n");
        printf("0.Back\n");
        printf("Enter Choice : ");
        scanf("%d", &choice);

        switch(choice){
            case 1 : roots();
                break;
            case 0 : main();
                break;
            default : printf("Enter valid option!");
                break;
        }   
    }
}