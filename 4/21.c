#include <stdio.h>

int main (){
    int input[15] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};

    int P[5];
    int I[5];

    int pointer_p = 0;
    int pointer_i = 0;

    for (int i = 0; i < 15; i++)
    {
        if (input[i] % 2 == 0)
        {
            P[pointer_p % 5] = input[i]; // Sobrescreve do começo se estiver cheio
            pointer_p++;
        } else {
            I[pointer_i % 5] = input[i]; // Sobrescreve do começo se estiver cheio
            pointer_i++;
        }
    }

    // Exibir os arrays P e I
    printf("Array P: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", P[i]);
    }
    printf("\n");

    printf("Array I: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", I[i]);
    }
    printf("\n");

    return 0;
}