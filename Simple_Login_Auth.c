#include <stdio.h>
#include <string.h>
/*This program is a simple LOGIN AUTH which can be used in more complex program to grant access to users.
My name is Aashish and this is my first program related to cybersec which I made to make my programming fundamentals strong
Date: 13 April 2025*/
int main()
{
    char username[10], password[16];
    char true_usern[] = "aashishraj";
    char true_pass[] = "Cybersecurity1!2025";

    printf("Enter username: ");
    scanf("%s", username);

    printf("Enter password: ");
    scanf("%s", password);

    if (strcmp(username, true_usern) == 0 && strcmp(password, true_pass) == 0)
    {
        printf("\nAccess Granted!\n");
    }
    else
    {
        printf("\nAccess Denied!\n");
    }

    return 0;
}
