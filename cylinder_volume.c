#include <stdio.h>  // for input/output
int main() {
    int radius;
    // Ask user to enter radius
    printf("Enter radius of cylinder : ");
    scanf("%d", &radius);

    int height;
    // Ask user to enter height 
    printf("Enter height of cylinder : ");
    scanf("%d", &height);

    // Calculate Volume
    int volume = 3.14 * radius * radius * height;

    // Display Result
    printf("Volume of ur DICK is = %d\n", volume);
    return 0;  // tells the OS the program ended successfully
}
