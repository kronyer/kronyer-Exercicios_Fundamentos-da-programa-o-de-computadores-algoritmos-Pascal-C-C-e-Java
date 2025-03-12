#include <stdio.h>

#define MEDIA_MIN 12

int main()
{
    double n1, n2, n3;

    scanf("%lf", &n1);
    scanf("%lf", &n2);
    scanf("%lf", &n3);

    if (n1 < n2 && n1 < n3){
        if (n2 < n3){
            printf("Ordem crescente: %.2lf %.2lf %.2lf\n", n1, n2, n3);
        }
        else{
            printf("Ordem crescente: %.2lf %.2lf %.2lf\n", n1, n3, n2);
        }
    }
    else if (n2 < n1 && n2 < n3){
        if (n1 < n3){
            printf("Ordem crescente: %.2lf %.2lf %.2lf\n", n2, n1, n3);
        }
        else{
            printf("Ordem crescente: %.2lf %.2lf %.2lf\n", n2, n3, n1);
        }
    }
    else{
        if (n1 < n2){
            printf("Ordem crescente: %.2lf %.2lf %.2lf\n", n3, n1, n2);
        }
        else{
            printf("Ordem crescente: %.2lf %.2lf %.2lf\n", n3, n2, n1);
        }
    }
}