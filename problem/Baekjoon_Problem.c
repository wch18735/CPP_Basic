#include<stdio.h>

// �Էµ� ���ڿ����� �ܾ� ���� ã�Ƴ���

int main() {
	int count = 0;
	char input_str[] = "Mazatneunde Wae Teullyeoyo";
	
	if (sizeof(input_str) == 0)
		printf("�ܾ� ��: 0��");

	for (int i = 0; input_str[i] != '\0'; i++) {
		if (input_str[i] == ' ')
			count++;
	}

	printf("�ܾ� ��: %d��\n", count + 1);
}