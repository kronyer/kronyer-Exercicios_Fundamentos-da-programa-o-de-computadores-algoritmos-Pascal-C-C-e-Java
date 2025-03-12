int main (){
    double salary;

    printf("Enter your salary: ");
    scanf("%lf", &salary);

    double raise_perc;

    if (salary <= 300)
    {
        raise_perc = 0.5;
    } else if (salary <= 500)
    {
        raise_perc = 0.4;
    } else if (salary <= 700)
    {
        raise_perc = 0.3;
    } else if (salary <= 800)
    {
        raise_perc = 0.2;
    } else if (salary <= 1000)
    {
        raise_perc = 0.1;
    } else
    {
        raise_perc = 0.5;
    }

    double new_salary = salary + (salary * raise_perc);
    printf("The new salary is: %.2lf", new_salary);
    return 0;
}