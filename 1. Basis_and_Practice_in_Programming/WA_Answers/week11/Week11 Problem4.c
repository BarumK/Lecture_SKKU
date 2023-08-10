#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define RED printf("\033[1;31m");
#define GRN printf("\033[1;32m");
#define YLW printf("\033[1;33m");
#define BLU printf("\033[1;34m");
#define END printf("\033[0m");


//#define NUM 10

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
	Student tmp = stu[x];
	stu[x] = stu[y];
	stu[y] = tmp;
}

void bubble_sort(Student stu[], int n){
	for(int i = 0; i < n; i++)
		for(int j = 0; j < n-1; j++){
			if(stu[j].total < stu[j+1].total)
				swap(stu, j, j+1);
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

void gradingStu(Student stu[], int n){
	for(int i = 0; i < n; i++){
		stu[i].grade.rank = i + 1;
		if(stu[i].grade.rank <= n * 0.3){
			stu[i].grade.grade = 'A';
		}else if(stu[i].grade.rank <= n * 0.5){
			stu[i].grade.grade = 'B';
		}else if(stu[i].grade.rank <= n * 0.75){
			stu[i].grade.grade = 'C';
		}else if(stu[i].grade.rank <= n * 0.9){
			stu[i].grade.grade = 'D';
		}else
			stu[i].grade.grade = 'F';		
	}
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
