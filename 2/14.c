#include <stdio.h>
#include <time.h>

#define MEDIA_MIN 12

int main()
{
   double sal, novo_sal, boni, aux;

    printf("Salário: ");
    scanf("%lf", &sal);

    if (sal < 500)
    {
        boni = sal * 0.05;
    } else if (sal < 1200)
    {
        boni = sal * 0.12;
    } else {
        boni = 0;
    }

    if (sal <= 600)
    {
        aux = 150;
    } else {
        aux = 100;
    }

    novo_sal = sal + boni + aux;
}

// ->