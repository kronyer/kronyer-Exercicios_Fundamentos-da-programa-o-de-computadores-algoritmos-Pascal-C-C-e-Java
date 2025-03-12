#include <stdio.h>

#define MEDIA_MIN 12

int main()
{
  int d1,m1,a1,d2,m2,a2;

    printf("Digite a primeira data (dd/mm/aaaa): ");
    scanf("%d/%d/%d", &d1, &m1, &a1);
    printf("Digite a segunda data (dd/mm/aaaa): ");
    scanf("%d/%d/%d", &d2, &m2, &a2);

    if (a1 > a2)
    {
        printf("A primeira data é mais recente\n");
    }
    else if (a2 > a1)
    {
        printf("A segunda data é mais recente\n");
    }
    else if (m1 > m2)
    {
        printf("A primeira data é mais recente\n");
    }
    else if (m2 > m1)
    {
        printf("A segunda data é mais recente\n");
    }
    else if (d1 > d2)
    {
        printf("A primeira data é mais recente\n");
    }
    else if (d2 > d1)
    {
        printf("A segunda data é mais recente\n");
    }
    else
    {
        printf("As datas são iguais\n");
    }
}