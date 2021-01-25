#include<stdio.h>

// 입력된 문자열에서 단어 갯수 찾아내기

int main() {
	int count = 0;
	char input_str[] = "Mazatneunde Wae Teullyeoyo";
	
	if (sizeof(input_str) == 0)
		printf("단어 수: 0개");

	for (int i = 0; input_str[i] != '\0'; i++) {
		if (input_str[i] == ' ')
			count++;
	}

	printf("단어 수: %d개\n", count + 1);
}