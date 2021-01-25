#include<stdio.h>

// printf() 함수에서 %d, %f, %c, %s 등에 해당하는 것들을 서식 문자라 한다.
// 서식 (Type)을 뜻하며 같은 64(Data)라도 서식에 따라 다르게 해석되거나, 표현될 수 있기 때문에 서식문자는 매우 중요하다. 

int main() {
	int num = 15;
	printf("%d \n", num);	// decimal: 10진수
	printf("%o \n", num);	// octal digit: 8진수
	printf("%x \n", num);	// hexadecimal digit: 16진수
	printf("%c \n", num);	// char 형
}

/*
	같은 15라도 다음과 같이 다양하게 나타낼 수 있다.
*/