#include <stdio.h>
#include <string.h>
#include <math.h>

typedef struct {
	char firstname[20];
	unsigned math;
	unsigned eng;
	unsigned sci;
	unsigned sum;
	float average;
} Student;



int main() {
	FILE *ptr = fopen("data/student.txt", "r");
	printf("%5s  %5s  %5s  %5s  %5s  %5s\n", "NAME","MATH","ENG","SCI","SUM","AVG");
	
	Student stu[9];
	int num;
	fscanf(ptr, "%d", &num);
	for(int i = 0; i < 9; i++) {
		fscanf(ptr, "%s %d %d %d", stu[i].firstname, &stu[i].math, &stu[i].eng, &stu[i].sci);
		stu[i].sum = stu[i].math + stu[i].eng + stu[i].sci;
		stu[i].average = stu[i].sum / 3;
		printf("%5s  %5d  %5d  %5d  %5d  %5.2f\n",
					stu[i].firstname, stu[i].math, stu[i].eng, stu[i].sci, stu[i].sum, stu[i].average);
	}
	fclose(ptr);
	
	return 0;
}


/*
	printf("%5s  %5s  %5s  %5s  %5s  %5s\n", "NAME","MATH","ENG","SCI","SUM","AVG");
*/
