int main(){
    double average_balance;

    printf("Enter your average balance: ");
    scanf("%lf", &average_balance);

    double credit;
    if (average_balance > 400)
    {
credit = average_balance * 0.3;
    } else if (average_balance > 300)
    {
credit = average_balance * 0.25;
    } else if (average_balance > 200)
    {
credit = average_balance * 0.2;
    } else
    {
credit = average_balance * 0.1;
    }
}