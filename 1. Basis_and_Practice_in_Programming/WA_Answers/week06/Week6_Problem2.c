#include <stdio.h>
#include <stdlib.h>

int main() {
    srand(50);
    
    int a = 10, b = 0, k = -1;
    
    while(a > b){
        printf("Enter a range : ");
        scanf("%d %d", &a, &b);
    }
    
    while(k < 0){
        printf("Enter a number : ");
        scanf("%d", &k);
    }
    
    printf("The results ...\n");
    for(int i = 0; i < k; i++)
        printf("%d ", a + rand()%(b-a));
    
    printf("\n");
    
    return 0;
}

