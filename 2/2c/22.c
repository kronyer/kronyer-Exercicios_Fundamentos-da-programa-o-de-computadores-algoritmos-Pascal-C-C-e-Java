int main(int argc, char const *argv[])
{
    int idade;
    double peso;

    scanf("%d", &idade);
    scanf("%lf", &peso);

    if (idade < 20){
        if (peso < 60)
        {
            printf("9");
        } else if (peso <= 90)
        {
            printf("8");
        } else
        {
            printf("7");
        }
    } else if (idade <= 50)
    {
        if (peso < 60)
        {
            printf("6");
        } else if (peso <= 90)
        {
            printf("5");
        } else
        {
            printf("4");
        }
    } else
    {
        if (peso < 60)
        {
            printf("3");
        } else if (peso <= 90)
        {
            printf("2");
        } else
        {
            printf("1");
        }
    }

    
    return 0;
}
