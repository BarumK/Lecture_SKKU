#include <stdio.h>
typedef struct {
	char name[10];
	unsigned math;
	unsigned eng;
	unsigned sci;
} Score;
int main() {
	Score s1;
	
	FILE *fp;
	
	fp = fopen("score.txt", "w");
	
	for(int i = 0; i < 3; i++){
		printf("Name : ");
		scanf("%s", s1.name);
		printf("%s (math eng sci): ", s1.name);
		scanf("%d %d %d", &s1.math, &s1.eng, &s1.sci);
		fprintf(fp, "%s/%d/%d/%d\n", s1.name, s1.math, s1.eng, s1.sci);
	}
	
	fclose(fp);
	
		fp = fopen("score.txt", "r");
	char score[255];
	for(int i = 0; i < 3; i++){
		fgets(score, 255, fp);
		printf("%s", score);
	}
	fclose(fp);
	return 0;
}