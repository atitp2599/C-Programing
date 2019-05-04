/*
    Name: Atit Patel
    UCF ID: 4664066
    Date: 12/01/2018
    Assignment: LinkedLists
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>
#include <ctype.h>
#include <time.h>

//this data structure will hold all the information that the user inputs//
struct ContactInfo
{
    struct ContactInfo *next;
    char fname[50],lname[50];
    int pnum[20];
    int age[5];
};

//this function will ask the user to enter their contact information//
void getContactInfo(struct ContactInfo *ptr)
{
    printf("Please Enter your first name:");
    scanf("%s",ptr->fname);
    printf("Please Enter your last name:");
    scanf("%s",ptr->lname);
    printf("Please Enter your phone number:");
    scanf("%s", ptr->pnum);
    printf("Please Enter your age:");
    scanf("%s", ptr->age);

}

//his data structure adds the previous one at the end of the list//
struct ContactInfo *addContactInfoToList(struct ContactInfo *info)
{
    if (info== NULL)
    {
        info = calloc( 1, sizeof(struct ContactInfo));
        return info;
    }
    while (info->next != NULL)
    {
        info = info->next;
    }
    info->next = calloc(1,sizeof(struct ContactInfo));
    return info->next;
}

//this function will display the information in the linked list//
void displayInfo(struct ContactInfo *ptr)
{
    printf("Name: %s %s\n", ptr->fname, ptr->lname);
    printf("Phone Number: %s\n", ptr->pnum);
    printf("Age: %s\n", ptr->age);
}

//this function will enable the computer to read through all the data structures//
void walkTheList(struct ContactInfo*ptr)
{
    while (ptr !=NULL)
    {
        displayInfo(ptr);
        ptr=ptr->next;
    }
}


int main()
{
    struct ContactInfo *root, *np;
    int i;

    root = calloc(1, sizeof(struct ContactInfo));
    getContactInfo(root);

    np=root;
    for(i=0; i<9; i++)
    {
        np=addContactInfoToList(root);
        printf("\n");
        getContactInfo(np);
        printf("\n");

    }
    walkTheList(root);
    return 0;
}

