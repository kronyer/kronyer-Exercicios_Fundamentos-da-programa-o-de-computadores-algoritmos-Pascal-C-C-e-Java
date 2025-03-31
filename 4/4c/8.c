int main (){
    char nomes[7][50] = {"João", "Maria", "José", "Ana", "Carlos", "Mariana", "Pedro"};
    double media[7] = {7.5, 8.0, 6.5, 9.0, 7.0, 8.5, 6.0};
    double maior_media = 0;
    int id_maior_media = 0;

    for (int i = 0; i < 7; i++)
    {

            if (media[i] > maior_media)
            {
                maior_media = media[i];
                id_maior_media = i;
            }

            if (media[i] < 7)
            {
                printf("Aluno %s está abaixo da média\n", nomes[i]);
                double nota_necessaria = (10 - media[i]);
                printf("Precisa tirar %.2lf para passar\n", nota_necessaria);
            }
    }

    printf("Maior média: %.2lf\n", maior_media);
    printf("Aluno com maior média: %s\n", nomes[id_maior_media]);
}