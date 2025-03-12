int main(){
    double vd_media, preco_atual, porc_aumento, porc_dimin;

    printf("Digite o valor da venda media: ");
    scanf("%lf", &vd_media);

    printf("Digite o preco atual: ");
    scanf("%lf", &preco_atual);

    double novo_preco;
    
    if (vd_media < 500 || preco_atual < 30){
        porc_aumento = 10;
        novo_preco = preco_atual + (preco_atual * porc_aumento / 100);
    } else if (vd_media < 1200 || preco_atual < 80){
        porc_aumento = 15;
        novo_preco = preco_atual + (preco_atual * porc_aumento / 100);
    } else {
        porc_dimin = 20;
        novo_preco = preco_atual - (preco_atual * porc_dimin / 100);
    }
}