#include <stdio.h>

#define MEDIA_MIN 12

int main()
{
   double n1, n2;

   scanf("%lf", &n1);
    scanf("%lf", &n2);

    if (n1 > n2){
        printf("O maior número é: %.2lf\n", n1);
    } else {
        printf("O maior número é: %.2lf\n", n2);
    }
}