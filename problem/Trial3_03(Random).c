#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
	int seed;
	seed = (int)time(NULL);	// ���� �ð��� �̿��� RAND
	srand(seed);		// ������ �ɴ´�

	for (int i = 0; i < 5; i++)
		printf("1~100 ���� ����: %d \n", rand() % 100 + 1);	// ���Ÿ� ��Ȯ�Ѵ�
	return 0;
}