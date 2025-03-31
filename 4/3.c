#include <stdio.h>
int main ()
{
    int vet[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int vet2[10] = {11, 12, 13, 14, 15, 16, 17, 18, 19, 20};

    int vet3[10];

    for (int i = 0; i < 10; i++) {
        if (i % 2 == 0) {
            vet3[i] = vet[i];
        } else {
            vet3[i] = vet2[i];
        }
    }

    for (int i = 0; i < 10; i++) {
        printf("%d ", vet3[i]);
    }
}