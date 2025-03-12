void main(){
    int n1,n2;

    printf("Digite todos os numeros");
    scanf("%d %d %d %d", &n1, &n2);

    double media = (n1 + n2) / 2;

    if (media <3)
    {
        printf("Reprovado");
    }
    else if (media < 7)
    {
        printf("Exame");
    }
    else
    {
        printf("Aprovado");
    }
}