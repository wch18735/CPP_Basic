#include<stdio.h>

int main(int argc,char *argv[]) {
	int i = 0;
	printf("���� �� ���ڿ��� ��: %d \n", argc);

	for (i = 0; i < argc; i++)
		printf("%d ��° ���ڿ�: %s \n", i + 1, argv[i]);
	return 0;
}

// main �Լ��� ������ ���� ������ ���� �ִ�.
// int main(int argc, char *argv[]){...}
// char *argv[] �� ���� ���ذ� �ʿ��ϴ�.
// ���� Type argv[] �� Type *argv �� ���� ��Ÿ�� �� �ִ�.
// ���⼭ Type�� Ȯ���ϸ� char* �̴�.
// �ᱹ �̴�, char�� ������ ������ �̷��� 1���� �迭�� �̸��� ���޹��� �� �ִ� �Ű������̴�.