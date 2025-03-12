#include <stdio.h>
#include <string.h>
int main (){
    int i, n_termos, n1, n2, n3;

    scanf("%d", &n_termos);

    n1 = 2;
    n2 = 7;
    n3 = 3;

    i =4;

    while ( i != n_termos)
    {
        n1 *=2;
        printf("%d\n", n1);
        i++;
        if (i == n_termos)
        {
            break;
        }
        n2 *=3;
        printf("%d\n", n2);
        i++;
        if (i == n_termos)
        {
            break;
        }
        n3 *=4;
        printf("%d\n", n3);
        i++;
    }
}