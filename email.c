#include <stdio.h>
#include <string.h>

int main() {
    char email[50];
    char password[20];
    

    char correctEmail[] = "abc22@gmail.com";
    char correctPassword[] = "123456";
    
printf("Enter email: ");
    scanf("%s", email);
    printf("Enter password: ");
    scanf("%s", password);
    
    if(strcmp(email, correctEmail) == 0 && strcmp(password, correctPassword) == 0) {
        printf("Login successful!\n");
    } else {
        printf("Login failed. Please try again.\n");
    }
    
    return 0;
}

