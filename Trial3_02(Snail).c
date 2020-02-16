// 문제: 달팽이 배열을 만들어 이를 출력하는 프로그램을 작성하고자 한다. 달팽이 배열의 시작은 [0][0] 이며, 이는 시계방향으로 회전한다
// 풀이: 지정한 배열 이후 위치를 특정할 수 없다. 따라서 Boundary를 만들어주기 위해 입력받은 수가 n이면 (n+2)*(n+2) 사각형을 만들고 테두리는 NULL 값으로 채운 뒤, 
//		 NULL이거나 FULL이면 꺾는다
#include<stdio.h>
#include<stdlib.h>

#define FULL 1
#define EMPTY 0
#define NuLL -1
#define TRUE 1
#define FALSE 0


typedef int FLAG;
typedef struct block{
	int value;
	FLAG ForE;
} BLOCK;

void MakeArray(BLOCK **arr, int num);
void PrintArray(BLOCK **arr, int num);
void FreeArray(BLOCK **arr, int num);
char URDL(char ch);
FLAG CheckRIGHT(BLOCK **arr, int a, int b);
FLAG CheckLEFT(BLOCK **arr, int a, int b);
FLAG CheckUP(BLOCK **arr, int a, int b);
FLAG CheckDOWN(BLOCK **arr, int a, int b);
FLAG CheckHere(BLOCK **arr, int a, int b);

int main() {
	int num;
	printf("숫자를 입력하세요: ");
	scanf("%d", &num);

	BLOCK **arr = (BLOCK**)malloc(sizeof(BLOCK)*(num+2));
	MakeArray(arr,num);
	PrintArray(arr, num);
	FreeArray(arr,num);
}

void MakeArray(BLOCK **arr,int num) {
	for (int i = 0; i < num+2; i++)
		arr[i] = (BLOCK*)malloc(sizeof(BLOCK)*(num+2));
	for (int i = 0; i < num+2; i++) {
		for (int j = 0; j < num+2; j++) {
			if (i == 0 || i == num + 1 || j == 0 || j == num + 1) {
				arr[i][j].ForE = NuLL;
				arr[i][j].value = 0;
			}
			else{
				arr[i][j].ForE = EMPTY;
				arr[i][j].value = 0;
			}
		}
	}

	int i = 1;
	int j = 1;
	int pnum = 1;
	char direction = 'R';


	while (TRUE)
	{
		if (CheckHere(arr, i, j)) {
			arr[i][j].value = pnum;
			arr[i][j].ForE = FULL;
			pnum++;
		}	// 자기 자리 검사 및 채워넣기

		if (!CheckRIGHT(arr, i, j) && !CheckDOWN(arr, i, j) && !CheckLEFT(arr, i, j) && !CheckUP(arr, i, j))
			break;

		switch (direction)	// 현재 진행방향에 대한 검사
		{
		case 'R':
			if (CheckRIGHT(arr, i, j)) {
				j++;
				PrintArray(arr, num);
				printf("\n\n");
			}
			else {
				direction = URDL(direction);
			}
			break;
		case 'D':
			if (CheckDOWN(arr, i, j)) {
				i++;
				PrintArray(arr, num);
				printf("\n\n");
			}
			else direction = URDL(direction);
			break;
		case 'L':
			if (CheckLEFT(arr, i, j)) {
				j--;
				PrintArray(arr, num);
				printf("\n\n");
			}
			else direction = URDL(direction);
			break;
		case 'U':
			if (CheckUP(arr, i, j)) {
				i--;
				PrintArray(arr,num);
				printf("\n\n");
			}
			else direction = URDL(direction);
			break;
		}
	}
}

void PrintArray(BLOCK **arr, int num) {
	for (int i = 1; i < num+1; i++) {
		for (int j = 1; j < num+1; j++) {
			printf("%3d", arr[i][j].value);
		}
		printf("\n");
	}
};

void FreeArray(BLOCK **arr, int num) {
	for (int i = 0; i < num+2; i++)
		free(arr[i]);
	free(arr);
}
FLAG CheckRIGHT(BLOCK **arr, int a, int b){
	if (arr[a][b + 1].ForE == EMPTY)
		return TRUE;
	else return FALSE;
}
FLAG CheckLEFT(BLOCK **arr, int a, int b) {
	if (arr[a][b - 1].ForE == EMPTY)
		return TRUE;
	else return FALSE;
}
FLAG CheckUP(BLOCK **arr, int a, int b) {
	if (arr[a - 1][b].ForE == EMPTY)
		return TRUE;
	else return FALSE;
}
FLAG CheckDOWN(BLOCK **arr, int a, int b) {
	if (arr[a + 1][b].ForE == EMPTY)
		return TRUE;
	else return FALSE;
}
FLAG CheckHere(BLOCK **arr, int a, int b) {
	if (arr[a][b].ForE == EMPTY)
		return TRUE;
	else return FALSE;
}
char URDL(char ch) {
	switch (ch)
	{
	case 'U':
		return 'R';
		break;
	case 'R':
		return 'D';
		break;
	case 'D':
		return 'L';
		break;
	case 'L':
		return 'U';
		break;
	default:
		return 'U';
		break;
	}
}

/* 알고리즘 */
/*
	1. Up, Right, Down, Left 에 관한 알파벳이 검사방향을 설정한다 (FLAG 역할)
	2. 각 FLAG에 대하여 벽 (가장자리) 또는 FULL을 만나면 이는 방향을 전환한다 (시계방향)
	3. n을 입력받으면 (n+2)*(n+2) 의 정사각형을 만들어서 가장자리를 가리키는 포인터가 NULL POINT EXEPTION을 발생시키지 않게 한다
	4. 구조체를 활용해 Full or Empty와 Value를 가진 자료형을 만들었다
	5. 동적 메모리 할당 (Compile 시에 메모리를 할당)을 사용하였다. #include<stdlib.h>
	6. free()를 사용해 동적메모리를 해제한다
*/