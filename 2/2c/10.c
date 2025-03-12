#include <stdio.h>

int main(){
    double factory_cost;

    printf("Enter the factory cost of the item: ");
    scanf("%lf", &factory_cost);

    double item_price = 0;
    double distributor_perc = 0;
    double taxes= 0;
    if (factory_cost < 12000)
    {
        distributor_perc = 0.05;
        taxes = 0;
    }
    else if ( factory_cost <= 25000)
    {
        distributor_perc = 0.1;
        taxes = 0.15;
    } else{
        distributor_perc = 0.15;
        taxes = 0.2;
    }

    item_price = factory_cost + (factory_cost * distributor_perc) + (factory_cost * taxes);
    printf("The item price is: %.2lf", item_price);
}