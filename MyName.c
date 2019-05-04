/*
    Name: Atit Patel
    FID: 4664066
    Date: 10/7/18
    Assignment: MyName
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    //arrays are defined here//
    char name[20] = {'\0'}, upperName[20] = {'\0'}, lowerName[20] = {'\0'}, initialCappedName[20] = {'\0'};
    int i;

    //scanf is used to store user's input for 'name'//
    printf("What is your name?");
    scanf("%s", &name);
    printf("Original name:%s\n", name);

    //for loop to assign name in all lowercase characters//
    for (i=0; i<strlen(name); i++)
    {
        lowerName[i] = tolower(name[i]);
    }
    printf("Lower case name:%s\n", lowerName);

    //for loop to assign name in all uppercase characters//
    for (i=0; i<strlen(name); i++)
    {
        upperName[i] = toupper(name[i]);
    }
    printf("Upper case name:%s\n", upperName);

    //this loop assigns all characters in name lowercase//
    for (i=0; i<strlen(name); i++)
    {
        initialCappedName[i] = tolower(name[i]);
    }
        //this is where the first character in the array is set as a capital//
        initialCappedName[0] = toupper(name[0]);
    printf("Initial capped name:%s", initialCappedName);

    return 0;
}
