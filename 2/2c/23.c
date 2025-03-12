int main(int argc, char const *argv[])
{
    int prod_code, prod_quantity;

    double unit_price;

    if (prod_code <=10)
    {
        unit_price = 10;
    } else if (prod_code <=20)
    {
        unit_price = 15;
    } else if (prod_code <=30)
    {
        unit_price = 20;
    } else
    {
        unit_price = 30;
    }

    double total_price = unit_price * prod_quantity;

    double new_price = 0;

    if (total_price <= 250)
    {
        new_price = total_price * 0.05;
    } else if (total_price <= 500)
    {
        new_price = total_price * 0.1;
    } else
    {
        new_price = total_price * 0.15;
    }
    return 0;
}
