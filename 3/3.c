#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n;

    scanf("%d", &n);

    int num =0 ;
    int fat;
    for (int i =1; i <= n; i++)
    {
        scanf("%d", &num);
        fat = 1;
        for (int j = 1; j <= num; j++)
        {
            fat *= j;
        }
        printf("%d! = %d\n", num, fat);
    }

    return 0;
}
