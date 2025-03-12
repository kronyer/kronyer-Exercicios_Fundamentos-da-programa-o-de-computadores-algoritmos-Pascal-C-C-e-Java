#include <stdio.h>
#include <time.h>

#define MEDIA_MIN 12

int main()
{
    int menu;

    printf("Menu\n");
    printf("1 - Imposto\n");
    printf("2 - Novo salário\n");
    printf("3 - Classificação\n");
    printf("Digite a opção desejada: ");

    scanf("%d", &menu);

    if (menu == 1)
    {
        double sal, imp;

        printf("Salário: ");
        scanf("%lf", &sal);

        if (sal < 500)
        {
            imp = sal * 0.05;
            printf("Imposto: %.2lf\n", imp);
        } else if (sal >= 500 && sal <= 850)
        {
            imp = sal * 0.10;
            printf("Imposto: %.2lf\n", imp);
        } else if (sal > 850)
        {
            imp = sal * 0.15;
            printf("Imposto: %.2lf\n", imp);
        }
    }
    else if (menu == 2)
    {
        double sal;

        printf("Salário: ");
        scanf("%lf", &sal);

        if (sal > 1500)
        {
            sal = sal + 25;
            printf("novo salário: %.2lf\n", sal);
        } else if (sal >= 750 && sal <= 1500)
        {
            sal = sal + 50;
            printf("novo salário: %.2lf\n", sal);
        } else if (sal >= 450 && sal < 750)
        {
            sal = sal + 75;
            printf("novo salário: %.2lf\n", sal);
        } else if (sal < 450)
        {
            sal = sal + 100;
            printf("novo salário: %.2lf\n", sal);
        }
    } else if (menu ==3)
    {
        double sal;

        printf("Salário: ");
        scanf("%lf", &sal);

        if (sal <= 700)
        {
            printf("Mal remunerado\n");
        } else
        {
            printf("Bem remunerado\n");
        }
    }
}

// ->