void main(){
    int n1,n2,n3,n4;

    printf("Digite todos os numeros");
    scanf("%d %d %d %d", &n1, &n2, &n3, &n4);

    double media = (n1 + n2 + n3 + n4) / 4;

    if (media <7 )
    {
        printf("Reprovado");
    }
    else
    {
        printf("Aprovado");
    }
}