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
	printf("\n%5s  %5s  %5s  %5s  %5s  %5s\n", "NAME","MATH","ENG","SCI","SUM","AVG");
	
	FILE *fp;	
	fp = fopen("data/student.txt", "r");		
	Student read_person;	
	int num = 0;
	fscanf(fp,"%d",&num);
	for(int i=0; i<num; i++){
		fscanf(fp,"%s %d %d %d",read_person.firstname, &read_person.math, &read_person.eng, &read_person.sci);
	
		read_person.sum = read_person.math + read_person.eng + read_person.sci;
		read_person.average= floor((float)read_person.sum/3);
		printf("%5s  %5d  %5d  %5d  %5d  %5.2f\n",read_person.firstname, read_person.math, read_person.eng, read_person.sci,read_person.sum,read_person.average);
			
		
	}
	
	return 0;
}

