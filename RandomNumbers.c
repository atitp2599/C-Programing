/*
    Name: Atit Patel
    FID: 4664066
    Date: 10/7/18
    Assignment: RandomNumbers
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//global variable//
int userinput;

//this function asks the user for the amount of numbers//
void getchoice()
{
    do{
    printf("How many numbers would you like to enter?");
        scanf("%d", &userinput);
    }while(userinput>200);

}


int main()
{   int randnum[200];
    int i;
    int total, avg;
    srand(time(NULL));

//the function is called here//
        getchoice();

//these are two for loops//
    for(i=0; i<userinput; i++)
    {
        randnum[i]=rand()%10000 + 1;
    }
    for(i=0; i<userinput; i++)
    {
        printf("Number %d is %d\n", i+1, randnum[i]);
        total+=randnum[i];
    }
    avg = total / userinput;
    printf("The average is %d", avg);


    return 0;
}
