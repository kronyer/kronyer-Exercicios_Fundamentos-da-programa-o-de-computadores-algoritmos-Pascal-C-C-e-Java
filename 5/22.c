int main (){
    double prod_estoque[5][3] = {{0}};

    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 3; j++){
            scanf("%lf", &prod_estoque[i][j]);
        }
    }

    double soma_estoque[4] = {0};
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 3; j++){
            soma_estoque[i] += prod_estoque[i][j];
        }
    }

    double maior_estoque_produto_2 = prod_estoque[0][1]; // Inicializa com o estoque do produto 2 no armazém 0
for (int i = 1; i < 4; i++) { // Percorre os armazéns (linhas 0 a 3)
    if (prod_estoque[i][1] > maior_estoque_produto_2) {
        maior_estoque_produto_2 = prod_estoque[i][1];
    }
}

    int armazem_menor_estoque_total = 0;
    for (int i = 0; i < 4; i++){
            if (soma_estoque[i] < soma_estoque[armazem_menor_estoque_total]){
                armazem_menor_estoque_total = i;
            }
    }

    double custo_total_produto[3] = {0};
        for (int j = 0; j < 3; j++){
            custo_total_produto[j] = prod_estoque[4][j]; // produto * preço
        }

    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 3; j++){
            custo_total_produto[j] *= soma_estoque[i];
        }
    }

    double custo_total_armazems[4] = {0};
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 3; j++){
            custo_total_armazems[i] += prod_estoque[i][j] * custo_total_produto[j];
        }
    }



    //e0p0 e0p1 e0p2
    //e1p0 e1p1 e1p2
    //e2p0 e2p1 e2p2
    //e3p0 e3p1 e3p2
    //cp0 cp1 cp2

}