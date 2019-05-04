/*
    Name: Atit Patel
    FID: 4664066
    Date: 9/26/18
    Assignment: GetPI
*/

#include <stdio.h>
#include <stdlib.h>

//this is the function for the number pi//
float  getPI()
{
   float PI = 3.14159265;

   return PI;
}

int main()
{
    //the function is assigned to the local variable//
    float myPI;
    myPI = getPI();

    printf("The value of PI that was returned is %f\n", myPI);

    return 0;
}
