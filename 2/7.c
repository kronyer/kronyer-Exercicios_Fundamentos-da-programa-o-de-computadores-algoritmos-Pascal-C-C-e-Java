#include <stdio.h>

#define MEDIA_MIN 12

int main()
{
   double a, b,c, i;

    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);

    scanf("%lf", &i);

    if (i == 1)
    {
        if (a <b && a < c)
        {
            if (b<c){
                printf('%lf %lf %lf, a, b, c');
            }
            else{
                printf('%lf %lf %lf, a, c, b');
            }
        }
        else if (b < a && b < c)
        {
            if (a<c){
                printf('%lf %lf %lf, b, a, c');
            }
            else{
                printf('%lf %lf %lf, b, c, a');
            }
        }
        else if (c < a && c < b)
        {
            if (a<b){
                printf('%lf %lf %lf, c, a, b');
            }
            else{
                printf('%lf %lf %lf, c, b, a');
            }
        }
    }
    else if (i =2)
{
        if (a >b && a > c)
        {
            if (b>c){
                printf('%lf %lf %lf, a, b, c');
            }
            else{
                printf('%lf %lf %lf, a, c, b');
            }
        }
        else if (b > a && b > c)
        {
            if (a>c){
                printf('%lf %lf %lf, b, a, c');
            }
            else{
                printf('%lf %lf %lf, b, c, a');
            }
        }
        else if (c > a && c > b)
        {
            if (a>b){
                printf('%lf %lf %lf, c, a, b');
            }
            else{
                printf('%lf %lf %lf, c, b, a');
            }
        }
}
else if (i = 3){
    if (a <b && a < c)
        {
            if (b<c){
                printf('%lf %lf %lf, a, b, c');
            }
            else{
                printf('%lf %lf %lf, a, c, b');
            }
        }
        else if (b < a && b < c)
        {
            if (a<c){
                printf('%lf %lf %lf, b, a, c');
            }
            else{
                printf('%lf %lf %lf, b, c, a');
            }
        }
        else if (c < a && c < b)
        {
            if (a<b){
                printf('%lf %lf %lf, c, a, b');
            }
            else{
                printf('%lf %lf %lf, c, b, a');
            }
        }
}
else if (i = 4){
    if (a >b && a > c)
        {
            if (b>c){
                printf('%lf %lf %lf, a, b, c');
            }
            else{
                printf('%lf %lf %lf, a, c, b');
            }
        }
        else if (b > a && b > c)
        {
            if (a>c){
                printf('%lf %lf %lf, b, a, c');
            }
            else{
                printf('%lf %lf %lf, b, c, a');
            }
        }
        else if (c > a && c > b)
        {
            if (a>b){
                printf('%lf %lf %lf, c, a, b');
            }
            else{
                printf('%lf %lf %lf, c, b, a');
            }
        }
}
else{
    printf("Opção inválida");
}
}