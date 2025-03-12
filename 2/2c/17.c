int main (){

    char password[5];
    
    printf("Enter the password: ");
    scanf("%4s", password);

    if (strcmp(password, "4531") == 0){
        printf("Access granted");
    } else{
        printf("Access denied");
    }
}