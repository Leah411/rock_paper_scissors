#include <math.h>
#include <stdio.h>
#include <stdlib.h>

// game function
char r_p_c(int player, int computer){
    char result;
    if(player == 'r' &&  computer == 's' ){
        char *result = "\n you won";
        return *result;
    }
    if(player == 'r' &&  computer == 'p' ){
        char *result = "\n you lost";
        return *result;
    }
    if(player == 's' &&  computer == 'p' ){
        char *result = "\n you won";
        return *result;
    }
    if(player == 's' &&  computer == 'r' ){
        char *result = "\n you lost";
        return *result;
    }
    if(player == 'p' &&  computer == 'r' ){
        char *result = "\n you won";
        return *result;
    }
    if(player == 'p' &&  computer == 's' ){
        char *result = "\n you lost";
        return *result;
    }
    if(player == computer ){
        char *result = "\n game draw";
        return *result;
    }
}

int main(void){
    char computer;
    printf("hello world \n");
    char player ;
    printf("enter r for rock, p for paper of s for scissors \n");
    scanf("%s", &player);
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


    printf(r_p_c(player, computer));
    return 0;
}

