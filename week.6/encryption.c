// encryption.c
#include <stdio.h>
#include <string.h>

void encrypt(char* data, char key) {
	// data[i] != '\0' �� i < strlen(data)�� ���ƿ�
	for (int i = 0; data[i] != '\0'; i++) {
		data[i] = data[i] ^ key;
	}
}

void decrypt(char* data, char key) {
	// data[i] != '\0' �� i < strlen(data)�� ���ƿ�
	for (int i = 0; data[i] != '\0'; i++) {
		data[i] = data[i] ^ key;
	}
}

int main(void) {
	char plaintext[] = "Hanbat National University";
	char key = 'M';

	printf("Original : %s\n", plaintext);

	encrypt(plaintext, key);
	printf("Encrypted: %s\n", plaintext);

	decrypt(plaintext, key);
	printf("Decrypted: %s\n", plaintext);

	return 0;
}