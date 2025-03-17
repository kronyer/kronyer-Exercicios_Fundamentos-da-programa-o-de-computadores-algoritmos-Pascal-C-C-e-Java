int main (){

    int idade;
    int peso;
    int altura;

    int n_menor_18 = 0;
    int n_80kg = 0;

    double soma_altura = 0;


    for (int i = 0; i < 5; i++){
        double soma_idades = 0;
        for (int j = 0; j < 11; j++){

            printf("Digite a idade: ");
            scanf("%d", &idade);
            printf("Digite o peso: ");
            scanf("%d", &peso);
            printf("Digite a altura: ");
            scanf("%d", &altura);

            soma_idades+=idade;
            soma_altura+=altura;

            if (idade < 18){
                n_menor_18++;
            }

            if (peso > 80){
                n_80kg++;
            }
        }

        printf("Media das idades: %.2lf\n", soma_idades/11);
    }


    printf("Numero de pessoas com menos de 18 anos: %d\n", n_menor_18);
    printf("Numero de pessoas com mais de 80kg: %d\n", n_80kg);

    printf("Media das alturas: %.2lf\n", soma_altura/55);
    
    

    return 0;
}