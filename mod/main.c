#include <stdio.h>
#include <stdlib.h>

#define STANDARD 2019
#define TENTH 10
#define TWELFTH 12

void mod(int data, int *ten, int *tweleve);
void Ten_(int data);
void Tweleve_(int data);

void main() {
	int data = 0;
	int ten = 0;
	int tweleve = 0;
	while (1) {
	printf("서기 연도를 입력해주세요. ");
	printf("(기준년 2019년 기해년)\n");
		scanf_s("%d", &data);
		mod(data, &ten, &tweleve);
		Ten_(ten);
		Tweleve_(tweleve);
		system("pause");
		system("cls");
	}
}

void mod(int data, int *ten, int *tweleve) {
	int number = 0;
	number = STANDARD - data;
	*ten = number % TENTH;
	*tweleve = number % TWELFTH;
}

void Ten_(int data) {
	switch (data) {
	case 0: printf("기"); break;
	case 9: printf("경"); break;
	case 8: printf("신"); break;
	case 7: printf("임"); break;
	case 6: printf("계"); break;
	case 5: printf("갑"); break;
	case 4: printf("을"); break;
	case 3: printf("병"); break;
	case 2: printf("정"); break;
	case 1: printf("무"); break;
	}
}

void Tweleve_(int data) {
	switch (data) {
	case 0: printf("해"); break;
	case 11: printf("자"); break;
	case 10: printf("축"); break;
	case 9: printf("인"); break;
	case 8: printf("묘"); break;
	case 7: printf("진"); break;
	case 6: printf("사"); break;
	case 5: printf("오"); break;
	case 4: printf("미"); break;
	case 3: printf("신"); break;
	case 2: printf("유"); break;
	case 1: printf("술"); break;
	default: system("cls"); printf("2019년 이전만 가능합니다.\n"); return;
	}
	printf("년\n");
}