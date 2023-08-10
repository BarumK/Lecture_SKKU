#include <stdio.h>
#include <ctype.h>

#define MAXLEN 100

int main() {
	int n = 0;
	char sentence[MAXLEN];
	int len; // Total length of the sentence.
	int blank = 0; // You may need this to count word.
	int pos; // Position index.
	int wordlen; // Length of the target word (will be removed)
	// 문장 입력받는 부분
	printf("Enter a sentence :");
	fgets(sentence, MAXLEN, stdin);

	// 스페이스바 위치 확인
	int space[MAXLEN];
	for (len = 0; (sentence[len] != '\0') && (len < MAXLEN); len++) {
		if (sentence[len] == ' ') {
			space[blank++] = len;
		}
	}

	for (int i = 0; i < blank - 1; i++) {
		if (space[i + 1] == space[i] + 1){
			for (int j = i; j < blank; j++)
				space[j] = space[j + 1];
			blank--;
			break;
		}
	}

	// n 입력받는 부분
	printf("Enter a number, n:");
	scanf("%d", &n);

	// 나머지 작업
	if ((n == 1) && (blank == 0)) {
		pos = 0;
		wordlen = len;
	}
	else if (n == 1) { // 맨 처음
		pos = 0;
		wordlen = space[0];
	}
	else if (n == blank + 1) { // 맨 마지막
		pos = space[blank - 1];
		wordlen = len - space[blank - 1];
	}
	else { // 나머지 경우
		pos = space[n - 2] + 1;
		wordlen = space[n - 1] - space[n - 2] - 1;
	}
//printf("len = %d, blank = %d, pos = %d, wordlen = %d\n", len, blank, pos, wordlen);
// "len - wordlen" is target sentence's length. (After removing a word)
// + 1 includes the null character(\0) at the end of the string.
while(pos < len - wordlen + 1){
		sentence[pos] = sentence[pos + wordlen];
		pos++;
	}
	
	printf("%s", sentence);
	
	return 0;
}
