int main (){
    int idade;
    int soma_idades = 0;
    int qtd_idades = 0;
    do
    {
        scanf("%d", &idade);
        if (idade < 0)
        {
            break;
        }

        soma_idades += idade;
        qtd_idades++;

    } while (idade !=0);
    
    printf("Media das idades: %.2f\n", (float)soma_idades/qtd_idades);
}