int main (){
    int opt;
    double salario = 0;
    double imposto = 0;

    printf("1.Imposto\n2.Novo salario\n3.Classificacao\n4.Novo salario\n5.Sair\n");
    scanf("%d", &opt);

    switch (opt)
    {
    case 1:
        scanf("%lf", &salario);
        if (salario < 500){
            imposto = salario * 0.05;
        }
        else if (salario >= 500 && salario < 850){
            imposto = salario * 0.1;
        }
        else{
            imposto = salario * 0.15;
        }
        printf("Imposto: %.2lf\n", imposto);
        break;
    case 2:
        scanf("%lf", &salario);
        if (salario > 1500){
            salario += 25;
        }
        else if (salario >= 750 && salario <= 1500){
            salario += 50;
        }
        else if (salario >= 450 && salario < 750){
            salario += 75;
        }
        else{
            salario += 100;
        }
        printf("Novo salario: %.2lf\n", salario);
        break;
    case 3:
        scanf("%lf", &salario);
        if (salario < 700){
            printf("Mal remunerado\n");
        }
        else{
            printf("Bem remunerado\n");
        }
        break;
    default:
        break;
    }
}