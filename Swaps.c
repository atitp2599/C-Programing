/*
    Name: Atit Patel
    FID: 4664066
    Date: 10/30/18
    Assignment: Swaps
*/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

// this is the function to swaps int variables //
void intSwap(int *f, int *s)
{
    int tmp = *f;
    *f = *s;
    *s = tmp;
}

// this is the function to swap double variables //
void doubleSwap(double *f, double *s)
{
    double tmp = *f;
    *f = *s;
    *s = tmp;

}

// this is the variable to swap strings //
void nameSwap()
{
    char str1[100], str2[100], temp[100];
    printf("what is your first name?");
    scanf("%s", str1);
    printf("what is your last name?");
    scanf("%s", str2);
    strcpy(temp, str1);
    strcpy(str1, str2);
    strcpy(str2, temp);
    printf("your name swapped is %s %s", str1, str2);


}

int main()
{
    int i, j;
    printf("Enter one number:");
    scanf("%d", &i);
    printf("Enter another number:");
    scanf("%d", &j);
    // function to swap two ints is called here //
    intSwap(&i,&j);
    printf("The swapped values are %d & %d\n", i, j);

    double k, l;
    printf("Enter a decimal number:");
    scanf("%lf", &k);
    printf("Enter another decimal number:");
    scanf("%lf", &l);
    // function to swap two doubles is called here //
    doubleSwap(&k,&l);
    printf("The swapped values are %lf & %lf\n", k, l);

    // function to swap two doubles is called here //
    nameSwap();


    return 0;
}
