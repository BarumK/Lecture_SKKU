#include <stdio.h>
#define SIZE 10

void bobble_sort(int* randList){
	int temp;
	for (int i = 1; i < SIZE; i++) {
		
		for (int j = 0; j < SIZE - 1; j++) {
			
			if (randList[j] > randList[j + 1]) {
				temp = randList[j + 1];
				randList[j + 1] = randList[j];
				randList[j] = temp;
			}
		}
	}
}

void step_printer(int *randList, int low, int high){
	printf("Binary Search step:");
	for (int i = low; i <= high; i++) {
		printf("%d ", randList[i]);
	}
	puts("");
}

int binary_search(int num, int* randList, int low, int high){
	for (;;) {
		int middle = (low + high) / 2;
		
		if ( (low == (high + 1)) || ((low == high)) ) {
			if (randList[middle] == num) {
				return middle;
			}
			
			else {
				return -1;
			}
		}
		
		else {
			if (randList[middle] == num) {
				return middle;
			}
			
			else if(randList[middle] < num) {
				low = middle + 1;
				step_printer(randList, low, high);
			}
			
			else{
				high = middle - 1;
				step_printer(randList, low, high);
			}
		}
	}
}


int main(){
    int num = 0;
    int randList[SIZE];
    int flag;

    printf("Input array:");
    for( int i = 0; i < SIZE; i++ )
        scanf("%d", &randList[i]);

    printf("Input number:");
    scanf("%d", &num);
    
    bobble_sort( randList );

    printf("Sorted array:");
    for( int i = 0; i < SIZE; i++ )
        printf("%d ", randList[i]);
    puts("");

    flag = binary_search( num, randList, 0, SIZE - 1 );
    if( flag == -1 )
        printf("NOT FOUND!");
    else
        printf("%d is in the randList[%d]!", num, flag);
    
    return 0;
}
