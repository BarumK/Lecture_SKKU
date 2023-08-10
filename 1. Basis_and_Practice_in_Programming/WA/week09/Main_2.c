#include <stdio.h>

int main(){
	int array[4][4] = { {0, 0, 0, 0}, {0, 1, 2, 3}, {0, 2, 4, 6}, {0, 3, 6, 9}};
	
	

	for( int i = 0; i < 4; i++ ){
        for( int j = 0; j < 4; j++ ){
            printf("%d ", array[i][j]);
        }
        puts("");
    }
    return 0;
}
