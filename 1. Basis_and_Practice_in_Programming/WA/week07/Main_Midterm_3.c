#include <stdio.h>

int leaf_last_day[13]   = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int normal_last_day[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

char is_leaf_YN(int year) {
	if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
		return 'Y';
	else
		return 'N';
}

int main() {
	// 입력한 변수
	int d_lat, d_lon, d_year, d_month, d_day, d_hour, f_time, a_lat, a_lon;
	
	scanf("%d %d", &d_lat, &d_lon);
	scanf("%d %d %d %d", &d_year, &d_month, &d_day, &d_hour);
	scanf("%d", &f_time);
	scanf("%d %d", &a_lat, &a_lon);
	
	// 새로운 변수 지정하기는 여기에
	int temp_day; // 계산할때 임시적으로 저장하기 위한 변수
	int a_year, a_month, a_day, a_hour; // 최종적으로 출력할 값
	int tot_time; // 출발시간-1월 1일 0시부터 시간으로 환산
	int time_gap; // 시차 계산 변수 선언
	char leaf_YN; // 윤년인지 아닌지 판단
	
	
	// 출발 윤년 체크
	leaf_YN = is_leaf_YN(d_year);
	
	// 1월 1일 0시 기준 시간 계산
	tot_time = 0;
	for (int i = 1; i < d_month; i++) {
		if (leaf_YN == 'Y') {
			tot_time += leaf_last_day[i] * 24;
		}
		else {
			tot_time += normal_last_day[i] * 24;
		}
	}
	tot_time += (d_day - 1) * 24 + d_hour;
	
	// 비행시간 포함 계산
	tot_time += f_time;
	
	// 시차계산
	time_gap = (a_lon - d_lon) / 15;
	
	tot_time += time_gap; // 최종 도착지시간.
	
	// 도착지가 시차로 전날이면서 전년인경우
	if (tot_time < 0) {
		a_year = d_year - 1;
		a_month = 12;
		a_day = 31;
		a_hour = 24 + tot_time;		
	}
	else {
		temp_day = tot_time / 24 + 1;
		a_hour = tot_time % 24;
		
		// 도착지 년도 계산
		a_year = d_year;
		// 도착지 연도가 바뀌는 경우
		if (leaf_YN == 'Y') {
			if (temp_day >= 366) {      
				a_year = d_year + 1;
				temp_day -= 366;
			}
		} 
		else {
			if (temp_day >= 365){     
				a_year = d_year + 1;
				temp_day -= 365;
			}
		}
		
		// 도착지 윤년 체크
		leaf_YN = is_leaf_YN(a_year);
		
		// 도착지 월 일 계산
		a_month = 0;
		for(int i = 1; temp_day > 0; i++ ) {
			a_month++;
			a_day = temp_day;
			if(leaf_YN == 'Y') {
				temp_day -= leaf_last_day[i];
			}
			else{
				temp_day -= normal_last_day[i];	
			}
		}
	}
	
	// 최종 날짜 출력
	printf("Arrive at %d/%0.2d/%0.2d %d o'clock, and it is the ", a_year, a_month, a_day, a_hour);
	
	// 계절 정하기
	if (a_lat > 0) {
		if ((a_month >= 3) && (a_month <= 5))
			printf("spring.");
		else if ((a_month >= 6) && (a_month <= 8))
			printf("summer.");
		else if ((a_month >= 9) && (a_month <= 11))
			printf("autumn.");
		else
			printf("winter.");
	}
	else {
		if ((a_month >= 3) && (a_month <= 5))
			printf("autumn.");
		else if ((a_month >= 6) && (a_month <= 8))
			printf("winter.");
		else if ((a_month >= 9) && (a_month <= 11))
			printf("spring.");
		else
			printf("summer.");
	}
	
	return 0;
}
