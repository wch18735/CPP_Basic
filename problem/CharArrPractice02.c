#include<stdio.h>

// ����2: ���α׷� ����ڷκ��� ���ܾ �Է� �޾Ƽ� char�� �迭�� ������ �� �ܾ �������� ������, �̸� ����Ѵ�.

int main() {
	char str1[20], str2[20];
	int index = 0, i = 0;
	printf("���ܾ �Է��ϼ���: ");
	scanf("%s", str1);
	while (str1[index] != 0) index++;
	while (i != index) {
		str2[i] = str1[index - i - 1];
		i++;
	}
	str2[index] = str1[index]; // Null ���ڴ� �� ��ġ �״�� ����

	printf("�ܾ��: %s \n", str2);
	// �ѱ۷� �Է��ϸ� ����
}