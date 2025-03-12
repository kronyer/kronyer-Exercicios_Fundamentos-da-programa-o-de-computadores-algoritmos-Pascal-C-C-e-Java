int main (){

    double prod_price;

    printf("Enter the price of the product: ");
    scanf("%lf", &prod_price);

    double rise = 0;

    if (prod_price < 50)
    {
        rise = 0.05;
    }
    else if (prod_price <= 100)
    {
        rise = 0.1;
    }
    else
    {
        rise = 0.15;
    }

    double new_price = prod_price + (prod_price * rise);
    printf("The new price is: %.2lf", new_price);

    if (new_price <= 80)
    {
        printf("Barato");
    }
    else if (new_price <= 120)
    {
        printf("Normal");
    }
    else if (new_price <= 200)
    {
        printf("Caro");
    }
    else
    {
        printf("Muito caro");
    }
}