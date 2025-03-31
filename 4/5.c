#include <stdio.h>

int main() {
    int x[10] = {3,8,4,2,1,6,8,7,11,9};
    int y[10] = {2,1,5,12,3,0,1,4,5,6};

    int uni_x_y[20];
    int dif_x_y[10];  // Diferença X - Y corrigida
    int inter_x_y[10];
    int soma_x_y[10];
    int prod_x_y[10];

    int uni_index = 0;
    int dif_index = 0;
    int inter_index = 0;

    for (int i = 0; i < 10; i++)
    {
        soma_x_y[i] = x[i] + y[i];
        prod_x_y[i] = x[i] * y[i];
    }
    

    // Construir a união
    for (int i = 0; i < 10; i++) {
        int found = 0;
        for (int j = 0; j < uni_index; j++) {
            if (x[i] == uni_x_y[j]) {
                found = 1;
                break;
            }
        }
        if (!found) {
            uni_x_y[uni_index++] = x[i];
        }
    }

    for (int i = 0; i < 10; i++) {
        int found = 0;
        for (int j = 0; j < uni_index; j++) {
            if (y[i] == uni_x_y[j]) {
                found = 1;
                break;
            }
        }
        if (!found) {
            uni_x_y[uni_index++] = y[i];
        }
    }

    // Construir interseção e diferença correta
    for (int i = 0; i < 10; i++) {
        int found = 0;
        for (int j = 0; j < 10; j++) {
            if (x[i] == y[j]) {
                found = 1;
                break;
            }
        }
        if (found) {
            inter_x_y[inter_index++] = x[i]; // Adiciona interseção
        } else {
            dif_x_y[dif_index++] = x[i]; // Adiciona diferença (X - Y)
        }
    }

    // Imprimir resultados
    printf("União de x e y: ");
    for (int i = 0; i < uni_index; i++) {
        printf("%d ", uni_x_y[i]);
    }
    printf("\n");

    printf("Interseção de x e y: ");
    for (int i = 0; i < inter_index; i++) {
        printf("%d ", inter_x_y[i]);
    }
    printf("\n");

    printf("Diferença de x e y (X - Y): ");
    for (int i = 0; i < dif_index; i++) {
        printf("%d ", dif_x_y[i]);
    }
    printf("\n");

    printf("Soma de x e y: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", soma_x_y[i]);
    }

    printf("\n");

    printf("Produto de x e y: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", prod_x_y[i]);
    }

    return 0;
}
