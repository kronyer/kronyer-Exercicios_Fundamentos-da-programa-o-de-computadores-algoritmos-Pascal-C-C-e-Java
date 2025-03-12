int main (){

    int invest_type;

    printf("Enter the type of investment: ");
    printf("1 - Savings account\n");
    printf("2 - Fixed deposit\n");

    scanf("%d", &invest_type);

    double amount;
    printf("Enter the amount: ");
    scanf("%lf", &amount);

    if (invest_type == 1)
    {
        amount += amount * 0.03;
    } else{
        amount += amount * 0.04;
    }

    print("The total amount is: %.2lf", amount);
    return 0;

}