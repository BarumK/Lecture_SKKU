#include <stdio.h>
int main() {
    int num;
    printf("Enter the integer number : ");
    scanf("%d", &num);
    
    printf("n:!\n\n");
    for(int i=1; i<=num; i++) {
        if(i % 2 == 1) {
            int fact = 1;
            for(int j=1; j<=i; j++)
                fact *= j;
            printf("%d:%d\n", i, fact);
        }
    }
    return 0;
}

