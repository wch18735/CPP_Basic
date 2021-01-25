#include<stdio.h>

// 문제4: 앞으로 읽으나, 뒤로 읽으나 똑같은 것을 회문이라 한다. 입력한 단어가 회문인지 아닌지 판단하는 것
// 대소문자의 구분을 둔다

#define TRUE 1
#define FALSE 0
typedef int bool;

bool palindrome(char *,int);

int main() {
	char str[20];
	int len = 0;
	
	printf("문자열 입력:");
	scanf("%s", str);
	while (str[len] != '\0')
		len++;

	if (palindrome(str, len)) printf("회문 입니다.");
	else printf("회문이 아닙니다.");
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