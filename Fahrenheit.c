/*
    Name: Atit Patel
    FID: 4664066
    Date: 8/2/18
    Assignment: Fahrenheit
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // These are the variables //
    float celsius, fahrenheit;

    // This is what is going to be printed //
    printf("This is the temperature converter\n");
    printf("Please enter a temperature in degree fahrenheit:");
    scanf("%f", &fahrenheit);

    // Formula for the Fahrenheit to Celsius //
    celsius = (fahrenheit-32) * 5/9;

    printf("That is %.2f degrees in celsius.\n", celsius);
    printf("life is very good at this temperature");

    return 0;
}
