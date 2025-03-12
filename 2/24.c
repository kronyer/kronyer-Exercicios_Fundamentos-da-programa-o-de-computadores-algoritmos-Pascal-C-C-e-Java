#include <stdio.h>

int main() {
    double preco;
    char tipo;
    char refrigeracao;
    int precisa_refrigeracao = 0; // 0 representa false

    printf("Digite o preço do produto: ");
    scanf("%lf", &preco);
    
    printf("Qual o tipo do produto? ");
    scanf(" %c", &tipo);

    printf("O produto precisa de refrigeração? (s/n) ");
    scanf(" %c", &refrigeracao);

    // Determinar se o produto precisa de refrigeração com base na resposta
    if (refrigeracao == 's' || refrigeracao == 'S') {
        precisa_refrigeracao = 1; // 1 representa true
    }

    double valor_adic;
    if (precisa_refrigeracao == 0)
    {
        if (tipo == 'A')
        {
            if (preco < 15)
            {
                valor_adic = 2;
            } else{
                valor_adic = 5;
            }
        }
        else if (tipo == 'L')
        {
            if (preco < 10)
            {
                valor_adic = 1.5;
            } else{
                valor_adic = 2.5;
            }
        }
        else if (tipo == 'V')
        {
            if (preco < 30)
            {
                valor_adic = 3;
            } else{
                valor_adic = 2.5;
            }
        }
    } else{
        if (tipo == 'A')
        {
                valor_adic = 8;
        }
        else if (tipo == 'L')
        {
                valor_adic = 0;
        }
        else if (tipo == 'V')
        {
                valor_adic = 0;
        }
    }

    double valor_adic;
    double imposto;
    if (preco < 25)
    {
        imposto = preco * 0.05;
    } else{
        imposto = preco * 0.08;
    }

    printf("imposto: %.2lf\n", imposto);

    double pre_custo = preco + imposto;

    printf("preço de custo: %.2lf\n", pre_custo);

    double desconto;
    if (tipo != "A" && refrigeracao != 1)
    {
        desconto = pre_custo * 0.03;
    } else{
         desconto = 0;
    }

    double novo_pre = pre_custo + valor_adic - desconto;

    if (novo_pre <= 50)
    {
        printf("Barato\n");
    } else if (novo_pre <= 120)
    {
        printf("Normal\n");
    } else{
        printf("Caro\n");
    }


    return 0;
}