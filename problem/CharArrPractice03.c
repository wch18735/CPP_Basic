#include<stdio.h>

int main() {
	char arr[20];
	int word[20];
	printf("영단어: ");
	scanf("%s", arr);
	int num = 0;
	for (int i = 0; arr[i] != '\0'; i++)
		word[i] = arr[i];
	for (int i = 0; arr[i] != '\0'; i++) {
		if (i == 0) num = word[i];
		else {
			if (word[i - 1] < word[i]) num = word[i];
			else word[i] = word[i - 1];
		}
	}
	printf("아스키코드 값이 가장 큰 문자는 %c \n", num);
}