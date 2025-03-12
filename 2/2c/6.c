#include <stdio.h>
#include <math.h>

int main(){
    double n1,n2;

    printf("Enter two numbers: ");
    scanf("%lf %lf", &n1, &n2);

    char option;

    printf("a)first number ^ second number\n");
    printf("b)Sqrt of each number\n");
    printf("c)Cubic root of each number\n");
    printf("d)Exit\n");

    printf("Enter an option: ");
    scanf(" %c", &option);

    switch(option){
        case 'a':
            printf("%.2lf ^ %.2lf = %.2lf", n1, n2, pow(n1,n2));
            break;
        case 'b':
            printf("Sqrt of %.2lf = %.2lf\n", n1, sqrt(n1));
            printf("Sqrt of %.2lf = %.2lf", n2, sqrt(n2));
            break;
        case 'c':
            printf("Cubic root of %.2lf = %.2lf\n", n1, cbrt(n1));
            printf("Cubic root of %.2lf = %.2lf", n2, cbrt(n2));
            break;
        case 'd':
            break;
        default:
            printf("Invalid option");
    }

}