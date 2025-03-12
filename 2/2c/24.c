int main(int argc, char const *argv[])
{
    double price;
    int category;
    char refrigerated;

    double total_raise;

    if (price <=25)
    {
        if (category == 1)
        {
            total_raise = price * 0.05;
        } else if (category == 2)
        {
            total_raise = price * 0.08;
        } else
        {
            total_raise = price * 0.12;
        }
    } else
    {
        if (category == 1)
        {
            total_raise = price * 0.12;
        } else if (category == 2)
        {
            total_raise = price * 0.15;
        } else
        {
            total_raise = price * 0.18;
        }
    }

    double tax = 0;
    if ((refrigerated == 'r' || refrigerated == 'R') || category == 2)
    {
        tax = price * 0.05;
    } else {
        tax = price * 0.08;
    }

    double new_price = price + total_raise - tax; //?

    char category_name[10];

    if (new_price <=50)
    {
        strcpy(category_name, "Barato");
    } else if (new_price <= 120)
    {
        strcpy(category_name, "Normal");
    } else
    {
        strcpy(category_name, "Caro");
    }
    return 0;
}
