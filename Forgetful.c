/*
    Name: Atit Patel
    FID: 4664066
    Date: 9/15/18
    Assignment: Forgetful
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //variables defined//
    int ExactTime, AllocatedTime, TimeDriven;


    //asking the user information//
    printf("Exact time it takes to drive to work in minutes:");
    scanf("%d",&ExactTime);
    printf("The time you allow yourself to drive before work starts(minutes).\n");
    printf("NOTE that this time should be more than the exact time it takes you to drive from home to work.\n");
    printf("Your Answer:");
    scanf("%d",&AllocatedTime);
    printf("how many minutes has it been since you left home?");
    scanf("%d",&TimeDriven);

    //output for the user depending on what they have inputted//
    printf("Under normal circumstances when you don't forget anything you will have %d minutes to spare when you get to work.\n",(AllocatedTime-ExactTime));
    printf("If you go home now, it will take you %d minute(s) to get back home, then another %d minutes to get to work.\n", TimeDriven, ExactTime);
    printf("That will make you total travel time %d minutes.\n\n", ((TimeDriven*2)+ ExactTime));

    //this condition will let the user know if they will be late//
    if ( AllocatedTime >= (TimeDriven*2)+ExactTime )
        {
    printf("You will arrive at work on time if you turn around to get the forgotten item");
        }

    else if ( AllocatedTime < (TimeDriven*2)+ExactTime)
        {
        printf("You be LATE to work if you turn around to get the forgotten item");
        }


    return 0;
}
