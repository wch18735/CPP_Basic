#include<stdio.h>
/*
	�������� (Global Variables)�� ���� ����
	�̴� �Լ��� region(����)�� ���� �����ȴ�
	�Լ��� ������ ��ġ �����̶�� �����ϸ� �ȴ�
	(�� ��, ���ο� ����Ǿ��ִٸ� �̴� �ٱ� ���� ������ ���� �ʴ´�)
*/

void Add(int);
void print_num();

int num = 1;

int main() { // ������ ������ ���� ���� ���� ������ �̷����� ���� Ȯ���� �� �ִ�.
	int num = 5;
	printf("Add: %d\n", num + 2);
	Add(2);
	print_num();

	return 0;
}

void Add(int val) {
	int num = 9;
	printf("Add: %d \n", num + val);
}

void print_num() {
	printf("Add: %d\n", num+2);
}

/*
	���� ���� ���������� ���� �����Ͽ�
	�ڵ尡 ���� ���̴� ���� ���İ�Ƽ �ڵ��� �Ѵ�.
	���α׷��Ӵ� �̸� �����ؾ��Ѵ�.
*/