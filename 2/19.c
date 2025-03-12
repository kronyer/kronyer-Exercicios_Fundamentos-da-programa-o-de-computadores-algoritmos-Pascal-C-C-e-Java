int main(){
    double altura, peso;

    printf("Digite a altura: ");
    scanf("%lf", &altura);

    printf("Digite o peso: ");
    scanf("%lf", &peso);

    if (altura < 1.20)
    {
        if (peso <= 60)
        {
            printf("A\n");
        } else if (peso <= 90)
        {
            printf("D\n");
        } else
        {
            printf("G\n");
        }
    }
    else if (altura <= 1.70)
    {
        if (peso <= 60)
        {
            printf("B\n");
        } else if (peso <= 90)
        {
            printf("E\n");
        } else
        {
            printf("H\n");
        }
    }
    else
    {
        if (peso <= 60)
        {
            printf("C\n");
        } else if (peso <= 90)
        {
            printf("F\n");
        } else
        {
            printf("I\n");
        }
    }
}