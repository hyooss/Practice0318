#include <stdio.h>
#include <malloc.h>
#include <string.h>

/* void test1(void) {
	// �迭(array)
	// �������� �����͸� ������� ����
	// �޸� ���� �������� �Ҵ�
	// �Ҵ���� ������ ��ġ(index)�� �ʿ�
	// �ε����� 0���� ����
	// �����ʹ� ���� �������� ��. int �س��� ���ڱ� �Ҽ� ������ �ȵ�

	int a[5] = {10,20,30,40,50}; //20byte. �Ѱ��� 4byte��
	printf("%d\n,a[2]");

	//�޸� ũ��
	printf("size=%d\n", sizeof(a));
	
	//�迭�� ����
	int length = sizeof(a) / sizeof(a[0]); //20 / 4 -> 5
	printf("%d\n", length);

	//������ ���
	printf("%d\n", a[length - 1]); //50
}*/

/* void test2(void) {
	int a[] = { 10,20,30,40,50 };
	//�迭 �̸��� ��ü : �迭�� ���� �ּ�
	printf("%p, %p\n", &a[0],a); // -> ���� �� ����.
	printf("%p, %p\n", &a[1], a+1); // �ּҿ� 1�� ���ϸ� �Ҵ���� ũ�⸸ŭ ������

	// �迭 �̸��� �����ͷ� ����� �� �ִ�
	printf("%d, %d\n", &a[0], a);
	// a[i]�� �����ͷ� ǥ���ϸ� *(a+1)
}*/

/*
void test3(void) {
	int a[] = { 10,20,30,40,50 };
	int* pa = a; // �迭�� �̸��� �������� �ʱⰪ

	printf("%d\n",*pa); //10
	printf("%d\n", *(pa+0)); //10
	printf("%d\n", *(pa + 1)); //20
	// �����͸� �迭ó�� ����� �� ������? -> ����
	printf("%d\n", pa[0]);
}*/

/*void test4(void) {
	// ���� �迭 : ���� �޸� ���� �Ҵ�: malloc()
	int* p = (int*)malloc(4); //4����Ʈ�� int����Ʈ ������ ���� ���ڴ�
	p[0] = 10;
}*/


void test5(void) {
	// ���ڿ�: "hello" = ��� ���� �迭��. h,e,l,l,o �̷���.
	// c���� ���ڿ��� ��� ���� ������ Ÿ���� ����
	char message[] = "hello";// =  { 'h', 'e', 'l', 'l', 'o', '\0'};
	char* pm = "korea"; //char* �� ���ڿ� ���ǰ� ����

	printf("%s\n", message);
	// %s: ���ڿ� ��� ����
	// -> �����ּҿ��� 1byte�� �о ���ڷ� ����϶�
	// ����? null����('\0')�� ���� ������
	// ���ڿ����� �ݵ�� ���� null ����
	printf("%d\n", sizeof(message)); //-> null ������ ����
	printf("%d\n", strlen(message)); // ���ڿ� ����. sizeof ���� �̰� ����. #include <string.h> �߰��ؾ���
	printf("%s\n", pm);
}

int main(void) {
	test5();
	return 0;
}