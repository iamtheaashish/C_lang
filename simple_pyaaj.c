/* Task is to calculate simple interest for a 
set of values representing principal, time period in years
and rate of interest. FORMULA SI = PRT/100*/
#include <stdio.h>
int main() {
    // for principal amount
    float Principal;
    printf ("Enter Principal Amount: ");
    scanf ("%f", &Principal);

    // for time period in years
    float Time;
    printf ("Enter No. of Years: ");
    scanf ("%f", &Time);

    // for rate of interest
    float Rate;
    printf ("Enter Rate of Interest: ");
    scanf ("%f", &Rate);

    // calculation of simple interest
    float SI = (Principal*Time*Rate)/100;
    printf ("Your SIMPLE INTEREST is: %.2f\n", SI);

    // calculation of total amount
    float Tamt = (SI+Principal);
    printf ("And TOTAL AMOUNT is: %.2f\n", Tamt);

    return 0;
}
