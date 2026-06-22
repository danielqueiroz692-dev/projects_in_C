#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    unsigned int choice_1;
    unsigned int max = 3;
    unsigned int min = 1;
    srand(time(0));

    printf("Choose one of the options\n"
        "Type 1 to Rock\n"
        "Type 2 to Paper\n"
        "Type 3 to Scissors\n");
    scanf("%u", &choice_1);

    unsigned int choice_2 = rand() % (max - min + 1) + min;

    printf("You choose %u and Your oponent choose %u\n", choice_1, choice_2);
    
    if (choice_1 == choice_2) {
        printf("You draw!!\n");
    } else if ((choice_1 == 1 && choice_2 == 3) ||
               (choice_1 == 2 && choice_2 == 1) ||
               (choice_1 == 3 && choice_2 == 2)) {
        printf("You Wins!!\n");      
    } else {
        printf("You Lose!!");
    }
 
return 0;

}