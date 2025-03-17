int main (){
    int idade;
    double altura, peso;
    char olhos, cabelos;

    int _qtd_acima50anos_menos_60kg = 0;

    int qtd_pessoas_menos_150cm = 0;
    int soma_idade_pessoas_menos_150cm = 0;
    double media_idade_pessoas_menos_150cm = 0;

    int qtd_olhos_azuis = 0;
    double porcentagem_olhos_azuis = 0;

    int qtd_ruivas_sem_olhos_azuis = 0;


    for (int i =0; i< 6; i++)
    {
        printf("Digite a idade: ");
        scanf("%d", &idade);
        printf("Digite a altura: ");
        scanf("%lf", &altura);
        printf("Digite o peso: ");
        scanf("%lf", &peso);
        printf("Digite a cor dos olhos: ");
        scanf(" %c", &olhos);
        printf("Digite a cor dos cabelos: ");
        scanf(" %c", &cabelos);

        if (idade > 50 && peso < 60)
        {
            _qtd_acima50anos_menos_60kg++;
        }

        if (altura < 150)
        {
            qtd_pessoas_menos_150cm++;
            soma_idade_pessoas_menos_150cm += idade;
        }

        if (olhos == 'A')
        {
            qtd_olhos_azuis++;
        }

        if (cabelos == 'R' && olhos != 'A')
        {
            qtd_ruivas_sem_olhos_azuis++;
        }

    }

    media_idade_pessoas_menos_150cm = (double)soma_idade_pessoas_menos_150cm / qtd_pessoas_menos_150cm;
    porcentagem_olhos_azuis = (double)qtd_olhos_azuis / 6 * 100;

    printf("Quantidade de pessoas com mais de 50 anos e menos de 60kg: %d\n", _qtd_acima50anos_menos_60kg);
    printf("Quantidade de pessoas com menos de 150cm: %d\n", qtd_pessoas_menos_150cm);
    printf("Media de idade das pessoas com menos de 150cm: %.2f\n", media_idade_pessoas_menos_150cm);
    printf("Quantidade de pessoas com olhos azuis: %d\n", qtd_olhos_azuis);
    printf("Porcentagem de pessoas com olhos azuis: %.2f%%\n", porcentagem_olhos_azuis);
    printf("Quantidade de pessoas ruivas sem olhos azuis: %d\n", qtd_ruivas_sem_olhos_azuis);
    return 0;
}