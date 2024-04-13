#include<stdio.h>
#include<stdlib.h>  //stdlib for using rand function
#include<time.h>  //for using time function
void main()
{
    int random ,guess,counter;
    srand(time(0));//to generate random function at different time
    
    random = rand() % 100 + 1; //to generate random function between 1 to 100
    counter=0;
    
    do{
        printf("\n Guess the number between 1 to 100 : ");
        scanf("%d",&guess);
        counter++;

        if(guess==random)
        {
            printf("\n You guessed the right number");
            break; //so that the loop breaks when guess is correct
        }

        if(guess>random)
        {
            printf("\n You guessed the wrong number");
            printf("\n Your guess is greater than the number");
        }
        if(guess<random)
        {
            printf("\n You guessed the wronh number");
            printf("\n Your guess is smaller than the number");
        }

    }while(counter!=10);
}