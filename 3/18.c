int main (){
    int typed_num;

    while (typed_num != 0 || typed_num > 0){
        printf("Digite um numero: ");
        scanf("%d", &typed_num);

        int squared_num = typed_num * typed_num;
        int cubed_num = typed_num * typed_num * typed_num;
        double sqrt_num = sqrt(typed_num);

        printf("Numero ao quadrado: %d\n", squared_num);
        printf("Numero ao cubo: %d\n", cubed_num);
        printf("Raiz quadrada do numero: %.2f\n", sqrt_num);

    }
}