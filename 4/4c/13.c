int main (){
    char nome_arr[8][50];
    double nota_arr[8];
    for (int i =0; i< 8; i++)
    {
        printf("digite o nome do %dº aluno: ", i+1);
        char nome[50];
        scanf("%s", nome);

        printf("digite a nota do %dº aluno: ", i+1);
        double nota;

        scanf("%lf", &nota);

        strcpy(nome_arr[i], nome);
        nota_arr[i] = nota;
    }

    printf("Relatorio de notas\n");
    for (int i = 0; i < 8; i++)
    {
        printf("Aluno: %s\n", nome_arr[i]);
        printf("Nota: %.2lf\n", nota_arr[i]);
    }

    printf("media da turma: ");
    double media = 0 ;

    for (int i = 0; i < 8; i++)
    {
        media += nota_arr[i];
    }

    media = media / 8;

    printf("%.2lf\n", media);

}