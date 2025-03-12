int main (){
    double angulo, voltas;

    printf("Digite o ângulo: ");
    scanf("%lf", &angulo);

    if (angulo > 360 || angulo < -360)
    {
        voltas = angulo / 360;
        angulo = angulo - (voltas * 360);
    } else {
        voltas = 0;
    }

    if (angulo == 0 || angulo == 90 || angulo == 180 || angulo == 270 || angulo == 360 || angulo == -90 || angulo == -180 || angulo == -270 || angulo == -360)
    {
        printf("Esta em cima dos eixos");
    }


if (angulo > 0 && angulo < 90)
    {
        printf("Esta no primeiro quadrante");
    }
    if (angulo > 90 && angulo < 180)
    {
        printf("Esta no segundo quadrante");
    }

    if (angulo > 180 && angulo < 270)
    {
        printf("Esta no terceiro quadrante");
    }

    if (angulo > 270 && angulo < 360)
    {
        printf("Esta no quarto quadrante");
    }

    printf("voltas no sentido ");
    if (voltas > 0)
    {
        printf("horário");
    } else {
        printf("anti-horário");
    }
    
}