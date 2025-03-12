#include <stdio.h>

int main()
{
 float area, radius;

    printf("Digite o raio: ");
    scanf("%f", &radius);

    area = 3.14 * radius * radius;
    printf("A area eh: %.2f", area);
}