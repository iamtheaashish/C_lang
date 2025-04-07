#include <stdio.h>  // for input/output
int main() {
    int celsius;
    // Ask user to enter Temperature in Celsius
    printf("Enter her temperature in celsius \xF0\x9F\x94\xA5\n: ");
    scanf("%d", &celsius);

    // Convert Celcius to Fahrenheit
    float fahrenheit = (9.0/5.0)*celsius + 32;

    // Display Result
    printf("She is this hot in Fahrenheit \xF0\x9F\xA5\xB5\n : %.2f\n", fahrenheit);
    return 0;  // tells the OS the program ended successfully
}
