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
	printf("���� ������ �Է����ּ���. ");
	printf("(���س� 2019�� ���س�)\n");
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
	case 0: printf("��"); break;
	case 9: printf("��"); break;
	case 8: printf("��"); break;
	case 7: printf("��"); break;
	case 6: printf("��"); break;
	case 5: printf("��"); break;
	case 4: printf("��"); break;
	case 3: printf("��"); break;
	case 2: printf("��"); break;
	case 1: printf("��"); break;
	}
}

void Tweleve_(int data) {
	switch (data) {
	case 0: printf("��"); break;
	case 11: printf("��"); break;
	case 10: printf("��"); break;
	case 9: printf("��"); break;
	case 8: printf("��"); break;
	case 7: printf("��"); break;
	case 6: printf("��"); break;
	case 5: printf("��"); break;
	case 4: printf("��"); break;
	case 3: printf("��"); break;
	case 2: printf("��"); break;
	case 1: printf("��"); break;
	default: system("cls"); printf("2019�� ������ �����մϴ�.\n"); return;
	}
	printf("��\n");
}