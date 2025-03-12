int main (){
    double actual_price;

    printf("Enter the actual price of the product: ");
    scanf("%lf", &actual_price);

    double new_price = 0;

    if (actual_price < 30)
    {
        printf("No discount");
    }
    else if (actual_price < 100)
    {
        new_price -= actual_price * 0.1;
    }
    else
    {
        new_price -= actual_price * 0.15;
    }

    printf("The new price is: %.2lf", new_price);
    return 0;
}