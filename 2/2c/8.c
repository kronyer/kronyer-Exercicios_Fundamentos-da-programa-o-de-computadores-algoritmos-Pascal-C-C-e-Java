int main(){
    double salary;

    printf("Enter your salary: ");
    scanf("%lf", &salary);

    if (salary <= 300)
    {
        salary += salary * 0.35;
    } else{
        salary += salary * 0.15;
    }

    printf("salary: %.2lf", salary);
}