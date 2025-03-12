int main ()
{
    int idade;

    scanf("%d", &idade);

    if (idade > 5){
        printf("Infantil");
    } else if (idade >7)
    {
        printf("Juvenil");
    } else if (idade > 10)
    {
        printf("Adolescente");
    } else if (idade > 15)
    {
        printf("Adulto");
    } else
    {
        printf("senior");
    }
}