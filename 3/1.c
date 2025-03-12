int main(int argc, char const *argv[])
{
    int i, actual_year;
    double salary, new_salary, percent;

    printf("Enter the actual year: ");
    scanf("%d", &actual_year);

    salary = 1000;

    percent = 0.015;

    new_salary += salary * percent;

    for (i = 2007; i < actual_year; i++)
    {
        percent *= 2;
        new_salary += new_salary * percent;
    }

    printf("The new salary is: %.2lf\n", new_salary);

    return 0;
}
