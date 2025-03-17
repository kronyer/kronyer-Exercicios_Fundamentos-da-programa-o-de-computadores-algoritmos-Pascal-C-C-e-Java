int main (){

    char code;

    double price = 0;

    double vista_total = 0;
    double prazo_total = 0;
    int prazo_quantity = 0;
    double total = 0;
    int quantity = 0;

    int primeira_prazo_valor = 0;


    for (int i =0; i<15; i++)
    scanf("%c", &code);

    if (code == 'V')
    {
        scanf("%lf", &price);
        vista_total += price;
        total += price;
        quantity++;
    }
    else{
        scanf("%lf", &price);
        prazo_total += price;
        total += price;
        quantity++;
        prazo_quantity++;
        
    }
    
    printf("Total de vendas a vista: %.2f\n", vista_total);
    printf("Total de vendas a prazo: %.2f\n", prazo_total);
    printf("Total de vendas: %.2f\n", total);
    printf("Valor da primeira prestação das compras a prazo juntas: %.2f\n", (prazo_total * prazo_quantity) / 3);
}