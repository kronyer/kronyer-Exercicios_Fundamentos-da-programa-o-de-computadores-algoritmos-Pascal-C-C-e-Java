#include <stdio.h>

int main(){
    int menu;

    printf("Enter a number\n: ");
    printf("1. Media between numbers\n");
    printf("2. Largest number\n");
    printf("3. Product\n");
    printf("4. Division\n");
    printf("5. Exit\n");

    scanf("%d", &menu);

    double n1,n2;

    printf("Enter two numbers: ");
    scanf("%lf %lf", &n1, &n2);

    if(menu == 1){
        printf("The media between %.2lf and %.2lf is %.2lf", n1, n2, (n1+n2)/2);
    }else if(menu == 2){
        if(n1 >= n2)
        {
            printf("The largest number is %.2lf", n1);
            printf("The diference is %.2lf", n1-n2);
        }
        else
        {
            printf("The largest number is %.2lf", n2);
            printf("The diference is %.2lf", n2-n1);
        }
    }
    else if(menu == 3){
        printf("The product between %.2lf and %.2lf is %.2lf", n1, n2, n1*n2);
}
    else if(menu == 4){
        if(n2 == 0)
            printf("Division by zero is not possible");
        else
            printf("The division between %.2lf and %.2lf is %.2lf", n1, n2, n1/n2);
    }
    else if(menu == 5){
        return 0;
    }
    else{
        printf("Invalid option");
    }
}