/*
    Name: Atit Patel
    UCF ID: 4664066
    Date: 9/2/18
    Assignment: Gallons

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{   //Variables are defined//
    float liters, milliliters, gallons;

    //Users will answer here//
    printf("This is the gallons to liters and milliliters converter!!\n");
    printf("How many gallons would you like to convert:");
    scanf("%f", &gallons);

    //Calculations//
    liters=gallons*3.78541178;
    milliliters=gallons*3785.41;

    //Output//
    printf("That is %.3f liters and %.3f milliliters\n",liters, milliliters); /* This the output of the users */

    return 0;
}
