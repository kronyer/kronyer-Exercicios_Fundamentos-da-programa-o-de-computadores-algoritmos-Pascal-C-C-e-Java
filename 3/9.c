int main (){
    double nota1, nota2;

    int n_rep = 0;
    int n_exame=0;
    int n_aprov=0;

    double soma_notas = 0;



    for (int i =0; i < 6; i++){
        printf("Digite a nota 1: ");
        scanf("%lf", &nota1);
        printf("Digite a nota 2: ");
        scanf("%lf", &nota2);

        double media = (nota1 + nota2) / 2;
        soma_notas+=media;
        printf("Media: %.2lf\n", media);

        if (media >= 7){
            n_aprov++;
            printf("Aprovado\n");
        } else if (media >= 4){
            n_exame++;
            printf("Recuperacao\n");
        } else {
            n_rep++;
            printf("Reprovado\n");
        }
    }

    printf("Numero de aprovados: %d\n", n_aprov);
    printf("Numero de reprovados: %d\n", n_rep);
    printf("Numero de exame: %d\n", n_exame);
    printf("Media das notas: %.2lf\n", soma_notas/6);
    return 0;
}