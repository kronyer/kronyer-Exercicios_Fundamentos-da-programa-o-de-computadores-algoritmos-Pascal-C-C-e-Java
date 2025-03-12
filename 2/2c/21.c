int main(int argc, char const *argv[])
{
    int code;

    scanf("%d", &code);

    if (code ==1)
    {
        printf("sul");
    } else if (code == 2)
    {
        printf("norte");
    } else if (code == 3)
    {
        printf("leste");
    } else if (code == 4)
    {
        printf("oeste");
    } else if (code == 5 || code == 6)
    {
        printf("nordeste");
    } else if (code ==7 || code == 8 || code ==9)
    {
        printf("sudeste");
    } else if ( code >= 10 && code <= 20)
    {
        printf("centro-oeste");
    } else if(code >= 21 && code <= 30)
    {
        printf("nordeste");
    } else
    {
        printf("codigo invalido");
    }
    return 0;
}
