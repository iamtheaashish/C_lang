#include <stdio.h>  // for input/output
int main() {
    int celsius;
    // Ask user to enter Temperature in Celsius
    printf("Enter temperature in celsius : ");
    scanf("%d", &celsius);

    // Convert Celcius to Fahrenheit
    float fahrenheit = (9.0/5.0)*celsius + 32;

    // Display Result
    printf("Babe U R this hot in Fahrenheit = %.2f\n", fahrenheit);
    return 0;  // tells the OS the program ended successfully
}
