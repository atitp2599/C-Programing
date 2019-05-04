/*
    Name: Atit Patel
    FID: 4664066
    Date: 10/7/18
    Assignment: AskForNumbers
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int userinput, total, avg;

//this function asks the user for the amount of numbers//
void getChoice()
{
    do{
        printf("How many numbers would you like to enter?");
        scanf("%d", &userinput);
    }while(userinput>200);
}
int main()
{
    int array[200], i;

//function is now called//
    getChoice();

//this is the loop to assign numbers to the array//
    for (i=0; i<userinput; i++)
    {
        printf("Please enter a number:");
        scanf("%d", &array[i]);
        total+=array[i];
    }
//this loop outputs the numbers associated with the array//
    for (i=0; i<userinput; i++)
    {
        printf("Number %d is %d\n", i+1, array[i]);
    }
    avg = total / userinput;
    printf("The average is %d", avg);

    return 0;
}
