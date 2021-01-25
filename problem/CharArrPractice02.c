#include<stdio.h>

// 문제2: 프로그램 사용자로부터 영단어를 입력 받아서 char형 배열에 저장하 뒤 단어를 역순으로 뒤집고, 이를 출력한다.

int main() {
	char str1[20], str2[20];
	int index = 0, i = 0;
	printf("영단어를 입력하세요: ");
	scanf("%s", str1);
	while (str1[index] != 0) index++;
	while (i != index) {
		str2[i] = str1[index - i - 1];
		i++;
	}
	str2[index] = str1[index]; // Null 문자는 그 위치 그대로 대입

	printf("단어역순: %s \n", str2);
	// 한글로 입력하면 깨짐
}