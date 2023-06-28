/**********************************     PROJECT 1  (Number Guessing)   ***********************************************************/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int number, guess, nguesses=1;
    srand(time(0));   // This function will reset the random number everytime
    number = rand() % 100 + 1; // Genrates random number between 0+1 to 99+1  (ie. 1 to 100)

       //  printf("The number is %d\n", number);  ********* If you want to know the ANSWER un-comment this line.


    // keep running the loop until the number is Guessed
    do
    {
        printf("I have Selected a number,So You Guess the number between 1 to 100: \n");
        scanf("%d", &guess);

        if (guess > number)
        {
            printf("please Enter Lower Number !\n");
        }
        else if (guess < number)
        {
            printf("Enter higher number please !\n");
        }
        else
        {
            printf("Yes you are correct the number was %d and You guessed it in %d attempts\n",number,nguesses);
        }

        nguesses++;
 
    } while (guess!=number);

    return 0;
}