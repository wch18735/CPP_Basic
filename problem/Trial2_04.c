#include<stdio.h>

// ����4: ������ ������, �ڷ� ������ �Ȱ��� ���� ȸ���̶� �Ѵ�. �Է��� �ܾ ȸ������ �ƴ��� �Ǵ��ϴ� ��
// ��ҹ����� ������ �д�

#define TRUE 1
#define FALSE 0
typedef int bool;

bool palindrome(char *,int);

int main() {
	char str[20];
	int len = 0;
	
	printf("���ڿ� �Է�:");
	scanf("%s", str);
	while (str[len] != '\0')
		len++;

	if (palindrome(str, len)) printf("ȸ�� �Դϴ�.");
	else printf("ȸ���� �ƴմϴ�.");
}

bool palindrome(char* arr, int len) {
	int left = 0, right = len - 1;
	while (left < right) {
		if (arr[left] != arr[right]) return FALSE;
		left++;
		right--;
	}
	return TRUE;
}