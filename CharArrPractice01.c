#include<stdio.h>

// ����1: ���α׷� ����ڷκ��� ���ܾ �Է¹޾� �� ���̸� ����Ͽ� ����ϴ� ���α׷�

int main() {
	char word[20];
	printf("���ܾ �Է����ּ���: ");
	scanf("%s", word);
	int i = 0, len = 0;
	while (word[i] != '\0') {
		len++;
		i++;
	}
	printf("�ܾ��� ���̴� %d\n", len);
}