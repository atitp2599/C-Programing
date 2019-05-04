#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void menu()
{
    printf("Please make a selection  from the following:\n\n");
    printf("1) Play Arithmetic Game.\n");
    printf("2) Play Guessing Game.\n");
    printf("3) Print Score.\n");
    printf("4) Quit.\n");
}
void score(int total)
{
    if(total<1)
    {
        printf("Your score for the round is 10");
    }else if (total>=1 && total<2)
    {
        printf("Your score for the round is 9");
    }else if (total>=2 && total<3)
    {
        printf("Your score for the round is 8");
    }else if (total>=3 && total<4)
    {
        printf("Your score for the round is 7");
    }else if (total>=4 && total<5)
    {
        printf("Your score for the round is 6");
    }else if (total>=5 && total<6)
    {
        printf("Your score for the round is 5");
    }else if (total>=6 && total<7)
    {
        printf("Your score for the round is 4");
    }else if (total>=7 && total<8)
    {
        printf("Your score for the round is 3");
    }else if (total>=8 && total<9)
    {
        printf("Your score for the round is 2");
    }else if (total>=9 && total<10)
    {
        printf("Your score for the round is 1");
    }else if (total>=10)
    {
        printf("Your score for the round is 0");
    }
}
double arithGame(int max,int quantity,int op)
{

    int total;
        printf("Would you like 1)Addition or 2)Multiplication?\n");
        scanf("%d", &op);
        printf("What is the maximum number you would like?");
        scanf("%d", &max);
        printf("How many problems do you want?");
        scanf("%d", &quantity);

        if (op==1)
        {
            int num1,  num2, add, UserAnswer, i;
            double start, end, elapse;
            for (i=1; i<=quantity; i++)
                {
                srand( time(NULL));
                num1 = rand()%max + 1;
                num2 = rand()%max + 1;
                add = num1 + num2;
                    start = time(NULL);
                    printf("What is %d + %d?", num1, num2);
                    scanf("%d", &UserAnswer);
                    end = time(NULL);
                    elapse = end - start;
            total=(elapse/quantity);
                    if (UserAnswer == add)
                    {
                    printf("Correct, great job!\n");
                    }else
                    {
                    printf("Sorry, that's incorrect, the answer is %d\n",  add);
                    }
                }
                    printf("You took an average of %lf seconds per question\n\n", elapse);

                    score(total);
                    printf("\n");


        }else if (op==2)
            {
            int num1,  num2, mult, UserAnswer,i,total;
            double start, end, elapse;
            for (i=1; i<=quantity; i++)
                {
                srand(time(NULL));
                num1 = rand()%max + 1;
                num2 = rand()%max + 1;
                mult = num1 * num2;

                    start = time(NULL);
                    printf("What is %d * %d?", num1, num2);
                    scanf("%d", &UserAnswer);
                    end = time(NULL);
                    elapse = end - start;

                    if (UserAnswer == mult)
                    {
                    printf("Correct, great job!\n");
                    }else
                    {
                    printf("Sorry, that's incorrect, the answer is %d\n", mult);
                    }
                    printf("You took an average of %lf seconds per question.\n",  elapse);
                    score(total);
                    printf("\n");
                    }

                }

    }
double guessGame(int max)
{       int rnd, guess;



        printf("what do you want the maximum number to be?");
        scanf("%d", &max);
        srand(time(NULL));
        rnd = rand()%max + 1;
        double start, end, elapse;


        start = time(NULL);
        do
        {
            printf("Try guessing the number:");
            scanf("%d",&guess);

            if (rnd>guess)
            {
                printf("Your guess is too low!\n");
            }
            else if (rnd<guess)
            {
                printf("Your guess is too high!\n");
            }
            end = time(NULL);
        }while (rnd != guess);

        elapse = (end - start);
        printf("HOORAY, YOUR GUESS WAS CORRECT!!!\n");
        printf("You took an average of %lf seconds per question.\n",  elapse);
        score(elapse);
        printf("\n");
}



int main()
{   int max,quantity,op,x;
    do{
        menu();
        scanf("%d",&x);
        if(x==1)
        {
           arithGame(max,quantity,op);
        }else if(x==2)
        {
            guessGame(max);
        }else if(x==3)
        {

        }


    }while(x<4);
    printf("Thank you for playing");
    return 0;
}
