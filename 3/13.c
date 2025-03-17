int main (){
    int total_criancas;

    int total_meninos = 0;
    int total_meninas = 0;

    int total_24 = 0;

    int tempo_de_vida = 0;
    char sexo;

    scanf("%d", &total_criancas);

    for (int i =0 ; i < total_criancas; i++){
        scanf("%d", &tempo_de_vida);
        scanf(" %c", &sexo);

        if (sexo == 'm'){
            total_meninos++;
        } else {
            total_meninas++;
        }

        if (tempo_de_vida <= 24){
            total_24++;
        }
    }

    printf("Total de meninos: %d\n", total_meninos);
    print("Porcentagem de meninos: %.2lf\n", (double)total_meninos/total_criancas*100);

    printf("Total de meninas: %d\n", total_meninas);
    print("Porcentagem de meninas: %.2lf\n", (double)total_meninas/total_criancas*100);

    printf("Total de criancas com 24 meses ou menos: %d\n", total_24);
    print("Porcentagem de criancas com 24 meses ou menos: %.2lf\n", (double)total_24/total_criancas*100);
}