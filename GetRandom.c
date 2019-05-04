/*
    Name: Atit Patel
    FID: 4664066
    Date: 9/25/18
    Assignment: GetRandom
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//this is the the random number generator//
int getRandomNumber ()
{
    int num;
    srand(time(NULL));
    num = (rand()%100 + 1);
    return num;
}

//this is where the  function will be assigned to 'rnd' to output a random number//
int main()
{
    int  rnd;
    rnd = getRandomNumber();
    printf("The random number that was returned from the getRandomNumber function is %d", rnd);


    return 0;
}
