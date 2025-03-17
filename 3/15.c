int main (){
    double preco_un;
    char refrigerado;
    char categoria;

    double custo_estocagem = 0;

    for (int i =0; i <12; i++){
        scanf("%lf", &preco_un);

    if (preco_un <= 20)
    {
        scanf(" %c", &categoria);
        switch (categoria)
        {
        case 'A':
            custo_estocagem = 2.0;
            break;
        case 'L':
            custo_estocagem = 3.0;
            break;
        case 'V':
            custo_estocagem = 4.0;
            break;
        default:
            break;
        }
    }
    else if (preco_un <= 50)
    {
        scanf(" %c", &refrigerado);
        if (refrigerado == 'S')
        {
            custo_estocagem = 6.0;
        }
        else
        {
            custo_estocagem = 0.0;
        }
    }
    else
    {
        scanf(" %c", &refrigerado);
        scanf(" %c", &categoria);


        if (refrigerado == 'S')
        {
            switch (categoria)
            {
            case 'A':
                custo_estocagem = 5.0;
                break;
            case 'L':
                custo_estocagem = 2.0;
                break;
            case 'V':
                custo_estocagem = 4.0;
                break;
            default:
                break;
            }
        }
        else
        {
                       switch (categoria)
            {
                case 'A':
                case 'B':
                    custo_estocagem = 0.0;
                    break;
                case 'L':
                    custo_estocagem = 1.0;
                    break;
                default:
                    break;
            }
        }

    }
}