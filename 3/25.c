int main (){
    double preco_unit;
    int pais_origem;
    char meio_transporte;
    char carga_perigosa;

    double imposto = 0;
    double valor_transporte = 0;
    double valor_seguro = 0;
    double preco_final = 0;

    do
    {
        scanf("%lf", &preco_unit);
        if (preco_unit == 0){
            break;
        }

        scanf("%d", &pais_origem);
        scanf(" %c", &meio_transporte);
        scanf(" %c", &carga_perigosa);

        if (preco_unit <= 100)
        {
            imposto = preco_unit * 0.05;
        } else{
            imposto = preco_unit * 0.1;
        }

        if (carga_perigosa == 'S')
        {
            switch (pais_origem)
            {
            case 1:
                valor_transporte = 50;
                break;
            case 2:
                valor_transporte = 21;
                break;
                case 3:
                valor_transporte = 24;
            default:
                break;
            }
        } else{
            switch (pais_origem)
            {
            case 1:
                valor_transporte = 12;
                break;
            case 2:
                valor_transporte = 21;
                break;
                case 3:
                valor_transporte = 60;
            default:
                break;
            }
        }

        if (meio_transporte == 'A' || pais_origem == 2)
        {
            valor_seguro = preco_unit * 0.5;
        } else{
            valor_seguro =0;
        }

        preco_final = preco_unit + imposto + valor_transporte + valor_seguro;

        printf("Preco unitario: %.2lf\n", preco_unit);
        printf("Imposto: %.2lf\n", imposto);
        printf("Valor transporte: %.2lf\n", valor_transporte);
        printf("Valor seguro: %.2lf\n", valor_seguro);
        printf("Preco final: %.2lf\n", preco_final);
        
        
    } while (preco_unit > 0);
    
    
}