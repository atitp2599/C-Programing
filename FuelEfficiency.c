/*
    Name: Atit Patel
    FID: 4664066
    Date: 9/14/18
    Assignment: FuelEfficiency
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //variables defined//
    int RadiusInches, revolutions;
    double Distinches, avg, miles, gallons;

    //ask the user for car information//
    printf("What is the radius of your tires in inches?");
    scanf("%d", &RadiusInches);
    printf("How many revolutions did your car's tires make?");
    scanf("%d", &revolutions);
    printf("How many gallons did your car use?");
    scanf("%lf", &gallons);

    //calculations//
   Distinches = (((RadiusInches*2) * 3.14) * revolutions);
    miles = Distinches/63360;
    avg = miles/gallons;

    printf("Your car averaged %lf miles per gallon.\n", avg);

    //depending on the gas mileage, the code will output poor, average, good, or excellent//
    if ( avg <=20 )
    {
    printf("Your car got poor mileage.");
    }
    else if ( avg > 20 && avg <= 30 )
    {
        printf("Your car got average mileage");
    }
    else if ( avg > 30 && avg <=40 )
    {
        printf("Your car got good mileage");
    }
    else if ( avg > 40 )
    {
        printf("Your car got excellent mileage");
    }
    return 0;
}
