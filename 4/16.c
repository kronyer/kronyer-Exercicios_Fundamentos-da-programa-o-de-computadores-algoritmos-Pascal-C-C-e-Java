#include <stdio.h>
int main ()
{
    int vetor1[10] = {4,7,5,8,2,15,9,6,10,11};
    int vetor2[5] = {3,4,5,8,2};

    int vetor_res_1[10];
    int pointer1 = 0;

    int pointer2 = 0;
    int vetor_res_2[10];

    for (int i = 0; i < 10; i++)
    {
        if (vetor1[i] % 2 == 0)
        {
            //par
            int result = vetor1[i];
            for (int j = 0; j < 5; j++)
                {
                    result += vetor2[j];
                }
            vetor_res_1[pointer1] = result;
            pointer1++;
        }else{
            //impar
            int result = vetor1[i];
            for (int j = 0; j < 5; j++)
                {
                    result += vetor2[j];
                    
                }
                vetor_res_2[pointer2] = result;
                    pointer2++;
        }
        
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d,", vetor_res_1[i]);
    }

    printf("\n");

    for (int i = 0; i < 10; i++)
    {
        printf("%d,", vetor_res_2[i]);
    }
}