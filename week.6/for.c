// for.c - week.6
#include <stdio.h>
#include <string.h> // strilen() �Լ� ����ϱ�

int main(void) {
	char* string = "Hanbat National Unversity";

	// strlen() : char �迭�� ���̸� Ȯ���ϴ� �Լ�
	for (int i = 0; i < strlen(string); i++) {
		// a�� ASCII �ڵ�� 65
		// A�� ASCII �ڵ�� 97
		if (string[i] == 'a') {
			char upper = string[i] - 32;
			printf("index %d: %c \n", i, upper);
		}
		else if (string[i] == ' ') {
			continue; // ''������� �ʴ´�.
		}
		else {
			printf("index %d: %c \n", i, string[i]);
		}
		printf("index %d: %c \n", i, string[i]);
	}

	getch();

	return 0;
}