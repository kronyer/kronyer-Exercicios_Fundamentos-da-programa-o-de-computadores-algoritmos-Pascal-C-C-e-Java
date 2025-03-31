#include <stdio.h>
int main () {
    int res_arr[5] = {0};

    for (int i = 0 ; i< 5; i++)
    {

        printf("Digite o %dº número: ", i+1);
        int num;
        scanf("%d", &num);

        res_arr[i] = num;



    }

    printf("Números digitados: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", res_arr[i]);
    }
}