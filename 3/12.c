int main (){

    int emp_num;
    int pieces_month;
    char sex;

    int total_pieces = 0;
    int total_salary = 0;

    int num_homem = 0;
    int pec_homem = 0;

    int num_mulher = 0;
    int pec_mulher = 0;

    int cod_maior_salario;
    int maior_salario;

    double emp_salary;

    for (int i = 0; i < 15; i++){

        

        printf("Digite o numero do empregado: ");
        scanf("%d", &emp_num);
        printf("Digite o numero de pecas produzidas no mes: ");
        scanf("%d", &pieces_month);
        printf("Digite o sexo do empregado: ");
        scanf(" %c", &sex);

        

        if (pieces_month <= 30){
            emp_salary = 450;
        } else if (pieces_month <= 50){
            emp_salary = 450 + (pieces_month - 30) * 0.03;
        } else {
            emp_salary = 450 + (pieces_month - 30) * 0.05;
        }

        if (i = 0){
            cod_maior_salario = emp_num;
            maior_salario = emp_salary;
        } else if ( emp_salary > maior_salario){
            cod_maior_salario = emp_num;
            maior_salario = emp_salary;
        }

        if (sex == 'm'){
            num_homem++;
            pec_homem+=pieces_month;
        } else {
            num_mulher++;
            pec_mulher+=pieces_month;
        }

        printf("Numero do empregado: %d\n", emp_num);
        printf("Salario do empregado: %.2lf\n", emp_salary);

        total_pieces+=pieces_month;
        total_salary+=emp_salary;
    }

    printf("Total de pecas produzidas: %d\n", total_pieces);
    printf("Total de salarios pagos: %.2lf\n", total_salary);

    printf("Numero de homens: %d\n", num_homem);
    printf("Numero de pecas produzidas por homens: %d\n", pec_homem);
    printf("Media de pecas produzidas por homens: %.2lf\n", pec_homem/num_homem);

    printf("Numero de mulheres: %d\n", num_mulher);
    printf("Numero de pecas produzidas por mulheres: %d\n", pec_mulher);
    printf("Media de pecas produzidas por mulheres: %.2lf\n", pec_mulher/num_mulher);
}