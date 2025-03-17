int main (){
    int num = 0;

    int soma = 0;
    int qtd = 0;
    double media = 0;
    int maior = 0;
    int menor = 0;
    int total_pares = 0;
    double media_pares = 0;
    int qtd_pares = 0;
    int qtd_impares = 0;

    while (num != 30000){
        scanf("%d", &num);

        if (num == 30000){
            break;
        }

        soma += num;
        qtd++;

        if (num > maior){
            maior = num;
        }

        if (num < menor){
            menor = num;
        }

        if (num % 2 == 0){
            total_pares += num;
            qtd_pares++;
        }
        else{
            qtd_impares++;
        }
    }

    printf("soma = %d\n", soma);
    printf("media = %.2lf\n", (double)soma / qtd);
    printf("maior = %d\n", maior);
    printf("menor = %d\n", menor);
    printf("media pares = %.2lf\n", (double)total_pares / qtd_pares);
    printf("qtd pares = %d\n", qtd_pares);
    printf("qtd impares = %d\n", qtd_impares);
    printf("porc dos impares = %.2lf\n", (double)qtd_impares / qtd * 100);


}