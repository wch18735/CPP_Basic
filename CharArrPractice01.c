#include<stdio.h>

// 문제1: 프로그램 사용자로부터 영단어를 입력받아 그 길이를 계산하여 출력하는 프로그램

int main() {
	char word[20];
	printf("영단어를 입력해주세요: ");
	scanf("%s", word);
	int i = 0, len = 0;
	while (word[i] != '\0') {
		len++;
		i++;
	}
	printf("단어의 길이는 %d\n", len);
}