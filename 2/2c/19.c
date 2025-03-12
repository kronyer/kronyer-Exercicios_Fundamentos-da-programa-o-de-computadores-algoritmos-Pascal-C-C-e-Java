int main(){
    char sexo;
    double altura;
    int idade;

    double peso_ideal =0;
    if (sexo == 'm' || sexo == 'M'){
        peso_ideal = (72.7 * altura) - 58;
    } else{
        peso_ideal = (62.1 * altura) - 44.7;
    }
}