#include <stdio.h>
#include <stdlib.h>

int main() {
    srand(50);
    
    int sysNum = 1 + rand()%9;
    int usrNum = -1;
    
    while(usrNum < 1 || usrNum > 9){
        printf("Enter a positive number from 1 to 9 : ");
        scanf("%d", &usrNum);
    }
    
    printf("The system number is %d.\n", sysNum);
    
    if(sysNum > usrNum)
        printf("You Lose.\n");
    else if(sysNum < usrNum)
        printf("You Win.\n");
    else
        printf("You Draw.\n");
    
    return 0;
}

