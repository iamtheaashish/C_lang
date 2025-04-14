#include <stdio.h>
int main()
{
    // Input from saxy user
    int age;
    printf("Enter Your Age: ");
    scanf("%d", &age);

    // Conditionals
    if (age <= 13)
    {
        printf("You are either 13 or below it. Kiddo!\n");
    }
    else if (age > 13 && age <= 19)
    {
        printf("You are turning into an adult. Man!\n");
    }
    else if (age >= 20 && age <= 35)
    {
        printf("Now you are an young adult. Respect!\n");
    }
    else if (age >= 36 && age <= 75)
    {
        printf("You are an adult or a senior citizen. Respect++\n");
    }
    else if (age > 75 && age <= 100)
    {
        printf("BSDK kitna jiyega. Mar kyu nhi jata.\n");
    }

    return 0;
}
/*Write a program to classify the age of a person into the following categories:
  1. Under 13: "Child"
  2. 13 to 19: "Teenager"
  3. 20 to 35: "Young Adult"
  4. 36 and above: "Adult"              */
