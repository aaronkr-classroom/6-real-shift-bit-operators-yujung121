// lamp.c
#include <stdio.h>

unsigned char LampOff(unsigned char dest, unsigned char bit);
unsigned char LampOn(unsigned char dest, unsigned char bit);

int main(void) {
	unsigned char lamp = 0x7F; // lamp가 켜짐 (0111 1111) 0x7F
	printf("Lamp Off!\n");
	printf("%x -> ", lamp);
	lamp = LampOff(lamp, 3); // lamp 꺼줘 (0111 0111) 0x77
	printf("%x\n", lamp);

	printf("\nLamp On!\n");
	printf("%x -> ", lamp); // lamp가 이미 꺼짐 (0111 0111) 0x77
	lamp = LampOn(lamp, 3); // lamp 켜줘 (0111 1111) 0x7F
	printf("%x\n", lamp);

	getch();

	return 0;
}
unsigned char LampOff(unsigned char dest, unsigned char bit) {
	if (bit < 8) {
		dest = dest & ~(0x01 << bit); // AND 사용하면 0으로 설정
	}
	return dest;
}
unsigned char LampOn(unsigned char dest, unsigned char bit) {
	if (bit < 8) {
		dest = dest | (0x01 << bit); // OR 사용하면 1로 설정
	}
	return dest;
}