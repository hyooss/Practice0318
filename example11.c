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
	printf("�ִ�: %d\n", max);
}

int main(void) {
	int score[] = { 92,78,83,95,63 };
	int index;
	int length = sizeof(score) / sizeof(score[0]);
	int total = get_total(score,length); //�迭 �̸��� �Լ��� ����. �Լ��� �迭 �̸��� ��������? �ּҴ� �����Ͱ� ���� �� ����
	//����(����)�� �����ؾ���

	/*
	for (int index = 0; index < length; index++) {
		//0~4 index ����
		// for: ������ �� ������������
		// while: �� ������������. �ݺ��� ��Ȯ���� ������
		total += score[index];
	}*/	
	printf("����: %d\n", total);
	get_max(score,length);
	return 0;
}