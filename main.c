#include <stdio.h>


int main()
{
    int i,tries,guess,givenNum,left;

    printf("Welcome to Number Guessing Game!\nPlayer 1 choose a number :");
    scanf("%d",&givenNum);

    printf("How many tries do Player 2 want? : ");
    scanf("%d",&tries);

    for(i=1;i<=tries;i++){
            printf("\nGuess a number : ");
            scanf("%d",&guess);
            left = tries - i;

            if(guess==givenNum){
                printf("You won! You've guessed it right");
                break;
            }
            else{
                if(left==0){
                printf("\nGAME OVER");
                }
                else{
                printf("Wrong guess, Tries left %d",left);
                }

            }
    }


    return 0;
}
