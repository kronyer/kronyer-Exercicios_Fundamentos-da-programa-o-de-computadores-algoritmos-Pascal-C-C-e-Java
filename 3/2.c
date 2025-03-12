#include <stdio.h>

int main(int argc, char const *argv[])
{
    int N;

    double E;

    scanf("%d", &N);

    E = 1;

    double fat = 0;
    for (int i = 1; i <= N; i++)
    {
        fat = 1;
        for (int j = 1; j <= i; j++)
        {
            fat *= j;
        }
        E += 1/fat;
    }

    printf("E = 1");
    for (int i = 1; i <= N; i++)
    {
        printf(" + 1/%d!", i);
    }
    printf(" = %.15lf\n", E);

    return 0;
}