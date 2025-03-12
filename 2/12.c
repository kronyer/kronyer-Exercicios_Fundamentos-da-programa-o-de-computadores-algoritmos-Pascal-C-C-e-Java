#include <stdio.h>
#include <time.h>

#define MEDIA_MIN 12

int main()
{
int cargo;
double sal, aumento, novo_sal;

printf("Salário: ");
scanf("%lf", &sal);

printf("Cargo: ");
scanf("%d", &cargo);

if (cargo == 1)
{
    printf("Escrituário\n");
    aumento = sal * 0.5;
    printf("Aumento: %.2lf\n", aumento);
    novo_sal = sal + aumento;
    printf("Novo salário: %.2lf\n", novo_sal);
}
else if (cargo == 2)
{
    printf("Secretário\n");
    aumento = sal * 0.35;
    printf("Aumento: %.2lf\n", aumento);
    novo_sal = sal + aumento;
    printf("Novo salário: %.2lf\n", novo_sal);
}
else if (cargo == 3)
{
    printf("Caixa\n");
    aumento = sal * 0.2;
    printf("Aumento: %.2lf\n", aumento);
    novo_sal = sal + aumento;
    printf("Novo salário: %.2lf\n", novo_sal);
}
else if (cargo == 4)
{
    printf("Gerente\n");
    aumento = sal * 0.1;
    printf("Aumento: %.2lf\n", aumento);
    novo_sal = sal + aumento;
    printf("Novo salário: %.2lf\n", novo_sal);
}
else if (cargo == 5)
{
    printf("Diretor\n");
    aumento = 0;
    printf("Aumento: %.2lf\n", aumento);
    novo_sal = sal + aumento;
    printf("Novo salário: %.2lf\n", novo_sal);
}
else
{
    printf("Cargo inválido\n");
}
    return 0;
}

// ->