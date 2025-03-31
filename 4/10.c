int main (){

    int respostas[10];
    for (int i = 0; i < 10; i++)
    {
        printf("Digite a resposta da questão %d: ", i + 1);
        scanf("%d", &respostas[i]);
    }

    int tot_aprovados = 0;
    int tot_reprovados = 0;



    for ( int i =0; i < 10; i++)
    {
        printf("Digite o numero do %d aluno: ", i + 1);
        int acertos = 0;

        for (int j = 0; j < 8; j++)
        {
            int resposta;
            printf("Digite a resposta da questão %d: ", j + 1);
            scanf("%d", &resposta);

            if (resposta == respostas[j])
            {
                acertos++;
            }
        }
        int nota = acertos * 10;
        if (nota >= 60)
        {
            printf("O aluno %d foi aprovado com nota %d.\n", i + 1, nota);
            tot_aprovados++;
        }
        else
        {
            printf("O aluno %d foi reprovado com nota %d.\n", i + 1, nota);
            tot_reprovados++;
        }
    }

    double perc_aprovados = (double)tot_aprovados / 10 * 100;
}