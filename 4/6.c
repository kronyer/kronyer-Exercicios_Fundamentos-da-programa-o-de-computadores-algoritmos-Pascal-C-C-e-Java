#include <stdio.h>
int main (){
    int vet[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    for (int i = 0; i < 10 -1; i++)
    {
        for (int j = 0; j < 10 - i - 1; j++)
        {
            if (vet[j] < vet[j+1])
            {
                int temp = vet[j];
                vet[j] = vet[j+1];
                vet[j+1] = temp;
            }
        }
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", vet[i]);
    }
}