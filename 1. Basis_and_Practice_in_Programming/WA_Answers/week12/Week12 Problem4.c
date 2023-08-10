#include <stdio.h>
#include <string.h>

typedef struct{
	char firstname[20];
	unsigned height;
	unsigned weight;
} Person;


void Wmod(){
	Person new_person;
	
	
	printf("Enter your first name : ");
	scanf("%s",new_person.firstname);
	printf("Enter your height and weight - (Ex) 181 78 : ");
	scanf("%d %d",&new_person.height,&new_person.weight);
	
	
	FILE *fp;	
	fp = fopen("data/14w_2.txt", "a");
	fprintf(fp,"%s %d %d\n",new_person.firstname,new_person.height,new_person.weight);
	
	fclose(fp);
	
}

void Fmod(){
	FILE *fp;	
	fp = fopen("data/14w_2.txt", "r");
	char name[10];
	printf("Enter a name : ");
	scanf("%s",name);
	
	Person read_person;	
	
	int flag = 1;
	while(1){		
		int process = fscanf(fp,"%s %d %d",read_person.firstname, &read_person.height, &read_person.weight);
		if(process<0)
			break;		
		int result = strcmp(name, read_person.firstname);	
		if(!result){
			flag = 0;
			printf("%s %d %d\n",read_person.firstname, read_person.height, read_person.weight);
			
		}
	}
	if(flag)
		printf("Not found\n");
	fclose(fp);
	
}

void clearBuf(){
	
	while(getchar()!='\n');
}
void clearFile(){
	FILE *fp;	
	fp = fopen("data/14w_2.txt", "w");
	fprintf(fp,"");	
	fclose(fp);
	
}


int main() {
	clearFile();
	char input = NULL;
	printf("Please select a mode - <W> Write, <F> Find name, <Q> Quit : ");
	scanf("%c",&input);
	
	while(input!='Q'){		
		if(input=='W')
			Wmod();
		else if(input=='F')
			Fmod();		
		clearBuf();
		printf("Please select a mode - <W> Write, <F> Find name, <Q> Quit : ");
		scanf("%c",&input);
		
	}
	
	printf("Quit program\n");
	return 0;
}
