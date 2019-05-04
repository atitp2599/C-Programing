/*
    Name: Atit Patel
    FID: 4664066
    Date: 9/9/18
    Assignment: AskStartStopAndIncrement
*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    //variables defined//
    int i, StartNumber, EndNumber, increment;

    //screen will output this to the user//
    printf("At what number would you like to start counting?");
    scanf("%d", &StartNumber);
    printf("At what number would you like to end counting?");
    scanf("%d", &EndNumber);
    printf("By what number would you like to increment the counter each iteration?");
    scanf("%d", &increment);

    //calculations//
    i = StartNumber;

    //while statement restricts 'i' to only go up to the end number//
    while (i<=EndNumber)
        {
    printf("The counter value is %d\n",i);
    i+=increment;
        }
    return 0;
}
