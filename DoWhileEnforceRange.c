/*
    Name: Atit Patel
    FID: 4664066
    Date: 09/09/18
    Assignment: DoWhileEnforceRange
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int choice;

    //choosing a number from one to five//
    do{
    printf("Please enter a number from 1 to 5:");
    scanf("%d", &choice);
    }
    //while condition in between 1 and 5//
    while(choice < 1 || choice > 5);
    {
    //this will be the output if the user inputs the right number//
    printf("Thank you, you chose %d", choice);

    }
    return 0;
}
