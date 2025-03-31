#include <stdio.h>
int main (){
    int num[10] = {5,12,4,7,10,3,2,6,23,16};
    int divisores[5] = {3,11,5,8,2};

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (num[i] % divisores[j] == 0)
            {
                printf("%d é divisível por %d\n na posição %d", num[i], divisores[j], i);
            }
        }
    }
}