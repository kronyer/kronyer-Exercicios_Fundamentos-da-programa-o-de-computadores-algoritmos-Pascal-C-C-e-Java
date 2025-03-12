#include <stdio.h>

#define TAX 0.07;

int main (){
    double salary;

    printf("Enter your salary: ");
    scanf("%lf", &salary);

    double bonus =0;
    if (salary <=350){
        bonus = 100;
    } else if ( salary < 600){
        bonus = 75;
    } else if (salary <= 900){
        bonus = 50;
    } else{
        bonus = 35;
    }

    double total_salary = salary + bonus;
    double tax = total_salary * TAX;
    total_salary -= tax;

    printf("The total salary is: %.2lf", total_salary);
}