#include <stdio.h>

int main (){

    int num;

    printf("Digite um numero: ");
        scanf("%d", &num);

    int qtd_divisores;

    for (int i = 1; i <= num; i++){
        qtd_divisores = 0;
        

        if (num % i == 0){
            qtd_divisores++;
        }

    }

    printf("Numero de divisores: %d\n", qtd_divisores);

    if (qtd_divisores == 2){
        printf("Primo\n");
    } else {
        printf("Nao primo\n");
    }

return 0;
}