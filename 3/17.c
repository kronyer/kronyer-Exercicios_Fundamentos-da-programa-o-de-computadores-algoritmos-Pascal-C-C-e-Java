int main ()
{
    double sal_carlos, sal_joao;
    int meses;

    scanf("%lf", &sal_carlos);
    sal_joao = sal_carlos / 3;
    meses = 0;

    while (sal_joao < sal_carlos)
    {
        sal_carlos += sal_carlos * 0.02;
        sal_joao += sal_joao * 0.05;
        meses++;
    }

    printf("Salario de Carlos: %.2lf\n", sal_carlos);
    printf("Salario de Joao: %.2lf\n", sal_joao);
    printf("Meses passados: %d\n", meses);
}