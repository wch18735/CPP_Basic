#include<stdio.h>

int main() {
	// �ܾ� 3500��, �ּ��� 1�� �̻� ����
	int cream = 500, cream_num = 1;
	int sae = 700, sae_num = 1;
	int coke = 400, coke_num = 1;

	for (; cream*cream_num <= 3500; cream_num++) {
		for (; sae*sae_num <= 3500; sae_num++) {
			for (; coke*coke_num <= 3500; coke_num++) {
				if (cream*cream_num + sae * sae_num + coke * coke_num == 3500) 
					printf("ũ����: %d, �����: %d, �ݶ�: %d \n", cream_num, sae_num, coke_num);
			}
			coke_num = 1;
		}
		sae_num = 1;
	}

	printf("��� �����Ͻðڽ��ϱ�?\n");
}

// ����ǰ ������ 3���̱⿡ ��� ����� �� Ȯ���ϴ� 3�� for ���� ����
// ���� �þ�ٸ�?? (��ΰŸ�)