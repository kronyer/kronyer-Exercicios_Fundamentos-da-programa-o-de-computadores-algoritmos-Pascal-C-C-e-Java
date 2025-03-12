int main(){
   double x,y,z;

    printf("Digite o valor de x: ");
    scanf("%lf", &x);

    printf("Digite o valor de y: ");
    scanf("%lf", &y);

    printf("Digite o valor de z: ");
    scanf("%lf", &z);

    if (x < y + z && y < x + z && z < x + y){
        if (x == y && y == z){
            printf("Triangulo equilatero\n");
        } else if (x == y || x == z || y == z){
            printf("Triangulo isosceles\n");
        } else {
            printf("Triangulo escaleno\n");
        }
    } else {
        printf("Nao e um triangulo\n");
    }
}