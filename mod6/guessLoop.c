/*
 * =====================================================================================
 *
 *       Filename:  guessNum.c
 *
 *    Description:  Guess game with loop
 *
 *        Version:  1.0
 *        Created:  02/13/2018 09:29:00 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Seth Perkins (), sethperkins@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// Constants
const int LEN = 5; // number of chances
const int NUM = 20;
// Function Prototypes

// Main Function
int main()
{
    int input[LEN];
    int guess = 0;
    char answer = 'y';

    // 1( create a random number between 0 - NUM
    srand((int)time(0));
    while(answer != 'n')
    {
        guess = rand() % NUM;
        //2) ask user to enter number in the range. Capture input in an array

        // Start program and repeat program:
        {
            for(int i = 0; i <LEN; i++)//counter
            {
                printf("Enter a number between 0 and %d:\n", NUM);
                scanf("%d", &input[i]);
                if(input[i] < guess)
                {
                    printf("Go higher\n");

                }
                else if(input[i] == guess)
                {
                    printf("You got it!!\n");
                    break;
                }
                else
                {
                    printf("Go lower\n");

                }
            }
            // 3) IF number is < random number = GO HIGHER

            // 4) IF number is > random number = GO LOWER

            // 5) You have LENchances to get it correct

            // 6) display all choices entered

            printf("You entered: \n");

            for(int i = 0; i <LEN; i++)
            {
                printf(" [%d] \n", input[i]);
            }
            // ask question
            printf("Would you like to play again?\n");
            printf("\t'y' for yes\t'n' for no\n");
            scanf(" %c", &answer);
            guess = 0;

        }
    }// end of while loop
        printf("Thank you for playing\n");
        return 0;
    }
// Function Definitions


