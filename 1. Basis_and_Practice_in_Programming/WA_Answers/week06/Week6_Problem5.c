nclude <stdio.h>
#include <stdlib.h>

#define REC 1

#if REC
void guessNum(int usrNum, int sysNum, int equal){
    if(equal){
        printf("Excellent! You guessed the number!\n");
        return;
    }
    printf("Please type your guess : ");
    scanf("%d", &usrNum);
    if(usrNum > sysNum){
        printf("Too High. Try again.\n");
        guessNum(usrNum, sysNum, 0);
    }
    else if(usrNum < sysNum){
        printf("Too Low. Try again.\n");
        guessNum(usrNum, sysNum, 0);
    }
    else
        guessNum(usrNum, sysNum, 1);    
}
#endif

int main() {
    srand(50);
    int sysNum = 1 + rand()%1000;
    int usrNum = 0;
    
    printf("I have a number between 1 and 1000.\n");
    printf("Can you guess my number?\n");
    
#if REC
    guessNum(usrNum, sysNum, 0);

#else
    while(1){
        printf("Please type your guess : ");
        scanf("%d", &usrNum);
        
        if(usrNum > sysNum)
            printf("Too High. Try again.\n");
        else if(usrNum < sysNum)
            printf("Too Low. Try again.\n");
        else{
            printf("Excellent! You guessed the number.\n");
            break;
        }
    }
#endif
    
    return 0;
}

