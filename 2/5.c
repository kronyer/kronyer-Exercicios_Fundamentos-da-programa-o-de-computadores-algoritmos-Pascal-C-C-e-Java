#include <stdio.h>

#define MEDIA_MIN 12

int main()
{
    int n1, n2, n3, n4;

    scanf("%d", &n1);
    scanf("%d", &n2);
    scanf("%d", &n3);
    scanf("%d", &n4);

    if (n4 > n3){
        printf("Ordem crescente: %d %d %d %d\n", n1, n2, n3, n4);
    }
    else if (n4 > n2){
        printf("Ordem crescente: %d %d %d %d\n", n1, n2, n4, n3);
    }
    else if (n4 > n1){
        printf("Ordem crescente: %d %d %d %d\n", n1, n4, n2, n3);
    }
    else{
        printf("Ordem crescente: %d %d %d %d\n", n4, n1, n2, n3);
    }
}