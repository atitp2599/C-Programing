/*
    Name: Atit Patel
    FID: 4664066
    Date: 9/26/18
    Assignment: ShowNumberTimes5
*/

#include <stdio.h>
#include <stdlib.h>

//this is the function//
int mult5AndShow(int number)
{
    int  number5 = number * 5;
    printf("The number %d multiplied by 5 is %d\n", number, number5);


}

int main()
{
    //the user is asked what number it wants//
    int number;
    printf("What number would you like to multiply by 5?");
    scanf("%d", &number);

    //the  function is called & the  number the  user inputs is used in the parameter//
    mult5AndShow(number);



    return 0;
}
