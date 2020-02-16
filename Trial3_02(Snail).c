// ����: ������ �迭�� ����� �̸� ����ϴ� ���α׷��� �ۼ��ϰ��� �Ѵ�. ������ �迭�� ������ [0][0] �̸�, �̴� �ð�������� ȸ���Ѵ�
// Ǯ��: ������ �迭 ���� ��ġ�� Ư���� �� ����. ���� Boundary�� ������ֱ� ���� �Է¹��� ���� n�̸� (n+2)*(n+2) �簢���� ����� �׵θ��� NULL ������ ä�� ��, 
//		 NULL�̰ų� FULL�̸� ���´�
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
	printf("���ڸ� �Է��ϼ���: ");
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
		}	// �ڱ� �ڸ� �˻� �� ä���ֱ�

		if (!CheckRIGHT(arr, i, j) && !CheckDOWN(arr, i, j) && !CheckLEFT(arr, i, j) && !CheckUP(arr, i, j))
			break;

		switch (direction)	// ���� ������⿡ ���� �˻�
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

/* �˰��� */
/*
	1. Up, Right, Down, Left �� ���� ���ĺ��� �˻������ �����Ѵ� (FLAG ����)
	2. �� FLAG�� ���Ͽ� �� (�����ڸ�) �Ǵ� FULL�� ������ �̴� ������ ��ȯ�Ѵ� (�ð����)
	3. n�� �Է¹����� (n+2)*(n+2) �� ���簢���� ���� �����ڸ��� ����Ű�� �����Ͱ� NULL POINT EXEPTION�� �߻���Ű�� �ʰ� �Ѵ�
	4. ����ü�� Ȱ���� Full or Empty�� Value�� ���� �ڷ����� �������
	5. ���� �޸� �Ҵ� (Compile �ÿ� �޸𸮸� �Ҵ�)�� ����Ͽ���. #include<stdlib.h>
	6. free()�� ����� �����޸𸮸� �����Ѵ�
*/