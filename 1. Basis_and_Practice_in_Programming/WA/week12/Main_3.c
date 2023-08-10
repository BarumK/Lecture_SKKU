#include <stdio.h>
typedef struct {
	char name[10];
	unsigned math;
	unsigned eng;
	unsigned sci;
} Score;
int main() {
	FILE *ptr = fopen("score.txt", "w");
	Score student[3];
	for (int i = 0; i < 3; i++) {
		printf("Name : ");
		scanf("%s", student[i].name);
		printf("%s (math eng sci): ", student[i].name);
		scanf("%d %d %d", &student[i].math, &student[i].eng, &student[i].sci);
		
		fprintf(ptr, "%s/%d/%d/%d\n", student[i].name, student[i].math, student[i].eng, student[i].sci);
	}
	fclose(ptr);
	
	FILE *fp;
	fp = fopen("score.txt", "r");
	char score[255];
	for(int i = 0; i < 3; i++){
		fgets(score, 255, fp);
		printf("%s", score);
	}
	fclose(fp);
	return 0;
}
