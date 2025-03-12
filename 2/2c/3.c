int main(){
    double n1,n2;

    printf("Enter two numbers: ");
    scanf("%lf %lf", &n1, &n2);

    if(n1 >= n2)
        printf("The largest number is %.2lf", n1);
    else
        printf("The largest number is %.2lf", n2);
}