#include <stdio.h>

int sumUP(int n){
    
    if(n == 1)
        return 3 * n + 2;
    
    return 3 * n + 2 + sumUP(n - 1);
}

int main() {
    
    int n = 0, ret;
    
    while(1){
        printf("Enter a positive integer : ");
        scanf("%d", &n);
        if(n < 0)
            break;
        ret = sumUP(n);
        printf("Sum up to %dth term = %d\n", n, ret);
    }
    
    return 0;
}

