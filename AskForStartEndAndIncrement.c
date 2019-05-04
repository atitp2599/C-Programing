/*
    Name: Atit Patel
    FID: 4664066
    Date: 9/2/18
    Assignment: AskForStartEndAndIncrement
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // The variables are defined //
    int i;
    int start, end, increment;

    // These are the questions asked to the user//
    printf("This program demonstrates mastery of for loops.\n\n");
    printf("At what number would you like to start?");
    scanf("%d", &start);
    printf("At what number would you like to end?");
    scanf("%d", &end);
    printf("By what number would you like to increment?");
    scanf("%d", &increment);

    // The start of the loop //
   for(i=start; i<=end; i+=increment)
    {
    printf("The counter value is now %d\n", i);

    }

return 0;

}
