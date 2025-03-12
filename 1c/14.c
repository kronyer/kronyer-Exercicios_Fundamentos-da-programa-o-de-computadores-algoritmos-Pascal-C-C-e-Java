#include <stdio.h>
#include <time.h>

int main()
{
    int ano_atual, ano_nascimento, idade_atual, idade_2050;

    // Obter o ano atual automaticamente
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    ano_atual = tm.tm_year + 1900;

    printf("Ano atual: %d\n", ano_atual);

    printf("Digite o ano de nascimento: ");
    scanf("%d", &ano_nascimento);

    idade_atual = ano_atual - ano_nascimento;
    idade_2050 = 2050 - ano_nascimento;

    printf("Idade atual: %d\n", idade_atual);
    printf("Idade em 2050: %d\n", idade_2050);

    return 0;
}

/*
A função time(NULL) é usada para obter o tempo atual do sistema em segundos desde a época 
(normalmente 1 de janeiro de 1970). O argumento NULL indica que a função deve retornar o tempo atual. 
Aqui está uma explicação detalhada:

time_t t = time(NULL);: A função time() retorna o tempo atual em segundos desde a época e armazena esse valor na
 variável t do tipo time_t.
struct tm tm = *localtime(&t);: A função localtime() converte o valor de time_t em uma estrutura tm que 
contém informações detalhadas sobre a data e hora local.
ano_atual = tm.tm_year + 1900;: O campo tm_year da estrutura tm contém o número de anos desde 1900,
 então adicionamos 1900 para obter o ano atual.
*/