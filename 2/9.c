#include <stdio.h>
#include <time.h>

#define MEDIA_MIN 12

int main()
{
    int t, d, dia, mes, ano, hora, min;
    const char *meses[] = {
        "Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho",
        "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"
    };
    
    // Obter a data e hora atual
    time_t now = time(NULL);
    struct tm *local = localtime(&now);

    // Extrair dia, mês, ano, hora e minuto
    dia = local->tm_mday;
    mes = local->tm_mon + 1; // tm_mon é de 0 a 11, então adicionamos 1
    ano = local->tm_year + 1900; // tm_year é o número de anos desde 1900
    hora = local->tm_hour;
    min = local->tm_min;

    // Exibir a data e hora atual
    printf("Data atual: %02d de %s de %04d\n", dia, meses[mes], ano);
    printf("Hora atual: %02d:%02d\n", hora, min);

    return 0;
}

// ->