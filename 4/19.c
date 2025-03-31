#include <stdio.h>

int main (){
    char A[20] = {'a','g','y','w','5','v','s','8','6','j','g','a','w','2','m','c','h','q','6','l'};
    char B[20] = {'s','d','4','5','h','g','r','u','8','9','k','s','a','1','2','v','4','d','5','m'};

    for (int i = 0; i < 20; i++)
    {
        char aux = A[i];
        A[i] = B[19-i]; // Corrigido para acessar o índice correto
        B[19-i] = aux;  // Corrigido para acessar o índice correto
    }

    for (int i = 0; i < 20; i++)
    {
        printf("%c", A[i]);
    }

    printf("\n");

    for (int i = 0; i < 20; i++)
    {
        printf("%c", B[i]);
    }
}