#include<stdio.h>

int main() {
	// ����1: �������� ����ϵ�, ¦�� �ܸ� ��µǵ����ϸ�, �� ���� �ش� ���ڱ����� ����ϵ��� �Ѵ�.
	int dan = 1;
	int su = 1;
	while (1) {
		if (dan % 2 != 0) { // ¦�� ������ Ȧ�� ������ Ȯ��
			dan++;
			continue; // �ٽ� ���ǹ�����
		}
		while (1){
			printf("%d x %d = %d \n", dan, su, dan * su);
			su++;
			if (su > dan) break;
		}

		// dan�� ������Ű��, ���� �����
		dan++;
		su = 1;
		if (dan == 9) break; // ���� �ٱ��� while ���
	}

	// ����2: AZ + ZA = 99 �� ��� A�� Z�� ���ϴ� ���α׷�
	// (10A + Z) + (10Z + A) = 99 �� �����ϴ� (A, Z) �� ���ϴ� ���α׷�
	for (int a = 1; a < 10; a++) {
		for (int z = 1; z < 10; z++) {
			if (11 * a + 11 * z == 99)
				printf("(%d, %d)\n", a, z);
		}
	}
}