#include <stdio.h>


int main () {
    double salary;

    printf("Enter your salary: ");
    scanf("%lf", &salary);

    if (salary < 500){
        salary+=    salary*0.3;
        printf("salary: %.2lf", salary);
    } else{
        printf("You are not eligible for a raise");
    }
}