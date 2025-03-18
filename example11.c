#include <stdio.h>

int get_total(int* ps,int length) {
	int total = 0;
	int index;
	for (index = 0; index < length; index++) {
		total += ps[index]; // = *(ps + index);
	}
	return total;
}

void get_max(int* ps, int length) {
	int index;
	int max = ps[0];
	for (index = 1; index < length; index++) {
		if (max < ps[index]) {
			max = ps[index];
		}
	}
	printf("최댓값: %d\n", max);
}

int main(void) {
	int score[] = { 92,78,83,95,63 };
	int index;
	int length = sizeof(score) / sizeof(score[0]);
	int total = get_total(score,length); //배열 이름을 함수로 전달. 함수는 배열 이름을 무엇으로? 주소는 포인터가 담을 수 있음
	//개수(길이)도 전달해야함

	/*
	for (int index = 0; index < length; index++) {
		//0~4 index 생성
		// for: 개수가 딱 정해져있을때
		// while: 안 정해져있을때. 반복이 명확하지 않을때
		total += score[index];
	}*/	
	printf("총합: %d\n", total);
	get_max(score,length);
	return 0;
}