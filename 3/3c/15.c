int main (){

    char sexo;
    char gostou;

    int qtd_gostou = 0;
    int qtd_n_gostou = 0;
    int mulheres_gostaram = 0;
    int homens_n_gostaram = 0;
    int total_homens = 0;

    for (int i =0; i< 10; i++) //dinamica na pilha pai
    {

        scanf(" %c %c", &sexo, &gostou);
        
        if (gostou == 's')
        {
            qtd_gostou++;
        }
        else
        {
            qtd_n_gostou++;
        }

        if (sexo == 'f' && gostou == 's')
        {
            mulheres_gostaram++;
        }
        else if (sexo == 'm' && gostou == 'n')
        {
            homens_n_gostaram++;
        }

        if (sexo == 'm')
        {
            total_homens++;
        }
    }

    printf("Quantidade de pessoas que gostaram: %d\n", qtd_gostou);
    printf("Quantidade de pessoas que nao gostaram: %d\n", qtd_n_gostou);
    printf("Quantidade de mulheres que gostaram: %d\n", mulheres_gostaram);
    printf("Quantidade de homens que nao gostaram: %d\n", homens_n_gostaram);
    printf("Percentual de homensq que nao gostaram entre todos homens: %.2f\n", (float)homens_n_gostaram/total_homens * 100);
}