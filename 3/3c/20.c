int main ()
{
    printf("1 - Media aritmética");
    printf("2 - Média ponderada");
    printf("3 - Sair");

    int opt;

    do
    {
        if (opt ==1)
        {
            int soma = 0;
            for (int i =0; i <2; i++)
            {
                int num;
                scanf("%d", &num);
                soma += num;
            }

            printf("Media aritmética: %.2f\n", (float)soma/2);
        } else if (opt == 2)
        {
            int soma = 0;
            int peso = 0;
            for (int i =0; i <2; i++)
            {
                int num;
                scanf("%d", &num);
                soma += num * peso;
                peso++;
            }

            printf("Media ponderada: %.2f\n", (float)soma/3);
        } else{
            break;
        }
    } while (opt != 3);
    
}