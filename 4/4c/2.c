#include <stdio.h>
int main (){
    int vet[7] = {1,2,3,4,5,6,7};

    for (int i = 0; i < 7; i++)
    {
        if (vet[i] % 2 == 0 && vet[i] % 3 == 0)
        {
            printf("%d é mutiplo de 2 e 3\n", vet[i]);
        }
        else if (vet[i] % 2 == 0)
        {
            printf("%d é mutiplo de 2\n", vet[i]);
        } else if (vet[i] % 3 == 0){
            printf("%d é mutiplo de 3\n", vet[i]);
        }
    }
}