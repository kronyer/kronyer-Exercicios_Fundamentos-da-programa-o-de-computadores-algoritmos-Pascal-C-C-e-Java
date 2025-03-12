int main(){
    double a,b,c,x, delta;

    printf("Digite o valor de a: ");
    scanf("%lf", &a);

    if (a == 0)
    {
        printf("Nao e uma equacao de segundo grau\n");
        return 0;
    }

    printf("Digite o valor de b: ");
    scanf("%lf", &b);

    printf("Digite o valor de c: ");
    scanf("%lf", &c);

    delta = b*b - 4*a*c;

    if (delta < 0)
    {
        printf("Nao existem raizes reais\n");
        return 0;
    }

    if (delta == 0)
    {
        x = -b / (2*a);
        printf("A raiz da equacao e: %lf\n", x);
    } else {
        double x1, x2;
        x1 = (-b + sqrt(delta)) / (2*a);
        x2 = (-b - sqrt(delta)) / (2*a);
        printf("As raizes da equacao sao: %lf e %lf\n", x1, x2);
    }
}