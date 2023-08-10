#include <stdio.h>

int nSystem(int n, int k){
    if(k == 0)
        return 0;
    return nSystem(n, k/n) * 10 + k%n; 
}

int main() {

    int n = 0, k;
    
    while(n != 2 && n != 4 && n != 8){
        printf("Enter a system (2, 4 or 8) : ");
        scanf("%d", &n);
    }
    printf("Enter a number : ");
    scanf("%d", &k);
    
    printf("%d\n", nSystem(n, k));
    
    return 0;
}

