// while.c
#include <stdio.h>

int main(void) {
	int sum1 = 0; // ù ��° �õ�
	int sum2 = 1; // �� ��° �õ�
	int sum3 = 13; // �� ��° �õ�

	int count = 1;
	
	while (count <= 50) {
		printf("num(%d) * count(%d)", sum1, count);
		sum1 = sum1 * count;
		printf("%d\n", sum1);

		count++;
	}
	printf("\nTotal : count = %d, sum = %d", count, sum1);

	getch();

	return 0;
}