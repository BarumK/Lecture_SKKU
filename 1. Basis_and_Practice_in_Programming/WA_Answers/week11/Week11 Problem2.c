#include <stdio.h>
#include <ctype.h>

#define MAXLEN 100

int main() {
	int n = 0;
	char sentence[MAXLEN];
	int len, blank = 0, word, wordlen;
	
	printf("Enter a sentence :");
	for(len = 0; len < MAXLEN && (sentence[len] = getchar()) != '\n'; len++);
	sentence[len] = '\0';
	
	printf("Enter a number, n:");
	scanf("%d", &n);
	
	for(word = 0; word < len; word++){
		if(blank == n - 1){
			break;
		}
		if(sentence[word] == ' '){
			while(sentence[word + 1] == ' ' && word < len)
				word++;
			blank++;
		}
	}
	
	for(int j = word; j <= len; j++){
		if(sentence[j] == ' ' || sentence[j] == '\0'){
			wordlen = j - word;
			break;
		}
	}
	
	while(word < len - wordlen + 1){
		sentence[word] = sentence[word + wordlen];
		word++;
	}
	
	printf("%s", sentence);
	
	return 0;
}
