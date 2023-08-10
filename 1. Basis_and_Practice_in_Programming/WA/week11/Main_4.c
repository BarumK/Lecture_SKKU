#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define RED printf("\033[1;31m");
#define GRN printf("\033[1;32m");
#define YLW printf("\033[1;33m");
#define BLU printf("\033[1;34m");
#define END printf("\033[0m");

typedef struct grading {
	int rank;
	char grade;
}Grading;

typedef struct student {
	int id;
	int eng;
	int korean;
	int math;
	float total;
	Grading grade;
}Student;
void swap(Student stu[], int x, int y){
	int temp1;
	float temp2;
	
	temp1 = stu[x].id;
	stu[x].id = stu[y].id;
	stu[y].id = temp1;
	
	temp1 = stu[x].eng;
	stu[x].eng = stu[y].eng;
	stu[y].eng = temp1;
	
	temp1 = stu[x].korean;
	stu[x].korean = stu[y].korean;
	stu[y].korean = temp1;
	
	temp1 = stu[x].math;
	stu[x].math = stu[y].math;
	stu[y].math = temp1;
	
	temp2 = stu[x].total;
	stu[x].total = stu[y].total;
	stu[y].total = temp2;
}

void bubble_sort(Student stu[], int n){
	int temp;
	for (int i = 0; i < n; i++) {
		stu[i].grade.rank = i + 1;
		
		for (int j = 0; j < n - i - 1; j++) {
			if ((stu[j].total) < (stu[j + 1].total)) 
				swap(stu, j, (j + 1));
		}
	}
}

void gradingStu(Student stu[], int n){
	for (int i = 0; i < n; i++){
		if ((stu[i].grade.rank) <= (0.3 * n))
			stu[i].grade.grade = 'A';
		else if ((stu[i].grade.rank) <= (0.5 * n))
			stu[i].grade.grade = 'B';
		else if ((stu[i].grade.rank) <= (0.75 * n))
			stu[i].grade.grade = 'C';
		else if ((stu[i].grade.rank) <= (0.9 * n))
			stu[i].grade.grade = 'D';
		else
			stu[i].grade.grade = 'F';
	}
}

void printStruct(Student stu[], int n){
	for(int i = 0; i < n; i++){
		if(stu[i].grade.rank != -1){
			if((stu[i].grade.rank)/(double)n*100 <= 30)
				GRN
			else if((stu[i].grade.rank)/(double)n*100 > 90)
				RED
		}
		
		printf("St ID: %-3d E: %-4d K: %-4d M: %-4d Total: %.2lf (%c)\t", stu[i].id, stu[i].eng, stu[i].korean, stu[i].math, stu[i].total, stu[i].grade.grade);
		
		if(stu[i].grade.rank != -1){
		printf("(%2d/%-2d = %.1lf %)\n", stu[i].grade.rank, n, (stu[i].grade.rank)/(double)n*100);
		}else
			printf("(null)\n");
		END
	}
	printf("\n\n");
}

int main() {
	srand(30); // Seed is 30. (Fixed)
	int NUM;
	
	printf("How many students?: ");
	scanf("%d", &NUM);
		
	Student stu[NUM]; 
	
	for(int i = 0; i < NUM; i++){
		stu[i].id = i;
		stu[i].eng = rand() % 101;
		stu[i].korean = rand() % 101;
		stu[i].math = rand() % 101;	
		stu[i].total = (stu[i].eng + stu[i].korean + stu[i].math) / 3.0;		
		stu[i].grade.rank = -1;
		stu[i].grade.grade = ' ';
	}
	
	printf("\n");
	
	printStruct(stu, NUM);
	bubble_sort(stu, NUM);
	gradingStu(stu, NUM);
	printStruct(stu, NUM);
	
	
	return 0;
}
