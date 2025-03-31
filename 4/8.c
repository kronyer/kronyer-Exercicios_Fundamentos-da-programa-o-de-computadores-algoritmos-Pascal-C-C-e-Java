#include <stdio.h>

void bubbleSort(int vet[], int n){
    int i, j, aux;
    for(i = 0; i < n; i++){
        for(j = 0; j < n-1; j++){
            if(vet[j] > vet[j+1]){
                aux = vet[j];
                vet[j] = vet[j+1];
                vet[j+1] = aux;
            }
        }
    }
}

int main (){
    int vet1[5] = {6,8,1,10,3};
    int vet2[5] = {20,0,7,2,5};
    int vet3[10];

    // Ordenar vet1 e vet2
    bubbleSort(vet1, 5);
    bubbleSort(vet2, 5);

    // Juntar vet1 e vet2 em vet3
    for (int i = 0; i < 5; i++) {
        vet3[i] = vet1[i];
    }
    for (int i = 0; i < 5; i++) {
        vet3[i + 5] = vet2[i];
    }

    // Ordenar vet3
    bubbleSort(vet3, 10);

    // Imprimir vet3 ordenado
    printf("Vetor combinado e ordenado: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", vet3[i]);
    }
    printf("\n");

    return 0;
}