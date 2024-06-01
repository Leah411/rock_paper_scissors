#include <math.h>
#include <stdio.h>
#include <stdlib.h>

//global variables
char win = 'w';
char lose = 'l';

// game function
char r_p_c(int player, int computer){
    if(player == 'r' &&  computer == 's' ){
        return win;
    }

    if(player == 'r' &&  computer == 'p' ){
        return lose;
    }
    if(player == 's' &&  computer == 'p' ){
        return win;
    }
    if(player == 's' &&  computer == 'r' ){
        return lose;
    }
    if(player == 'p' &&  computer == 'r' ){
        return win;
    }
    if(player == 'p' &&  computer == 's' ){
        return lose;
    }
    if(player == computer ){
        char tie = 't';
        return tie;
    }
}

int main(void){
    char computer, player;
    //get user's choice
    printf("enter r for rock, p for paper of s for scissors \n");
    scanf("%s", &player);

    //computer's choice using random
    int computerNumber ;
    computerNumber = rand() % 100;
    if (computerNumber < 33){
        //r is for rock
        computer = 'r';
    }
    else if (computerNumber > 33 && computerNumber < 66){
        // p is for paper
        computer = 'p';
    }
    //s is for scissors
    else{
        computer = 's';
    }

    //storing function result in variable
    char result = r_p_c(player, computer);

    printf("computer : %c \n", computer );

    if (result == 'l'){
        printf("you have lost");
    }
    else if (result == 'w')
    {
       printf("you have won");
    }
    else{
        printf("it's a tie");
    }
    
    return 0;
}

