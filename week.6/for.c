// for.c - week.6
#include <stdio.h>
#include <string.h> // strilen() 함수 사용하기

int main(void) {
	char* string = "Hanbat National Unversity";

	// strlen() : char 배열의 길이를 확인하는 함수
	for (int i = 0; i < strlen(string); i++) {
		// a의 ASCII 코드는 65
		// A의 ASCII 코드는 97
		if (string[i] == 'a') {
			char upper = string[i] - 32;
			printf("index %d: %c \n", i, upper);
		}
		else if (string[i] == ' ') {
			continue; // ''출력하지 않는다.
		}
		else {
			printf("index %d: %c \n", i, string[i]);
		}
		printf("index %d: %c \n", i, string[i]);
	}

	getch();

	return 0;
}