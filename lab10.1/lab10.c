#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <locale.h>
#define ROW 9
#define COL 9
int lab6() {
	setlocale(LC_ALL, "RUS");
	int res, sym = 1;
	double x, y;
	do {
		printf("Введите координты x: ");
		scanf("%lf", &x);
		printf("Введите координты y: ");
		scanf("%lf", &y);
		res = check(x, y);
		if (res)
			printf("Точка (%lf;%lf) принадлежит рисунку", x, y);
		else
			printf("Точка (%lf;%lf) не принадлежит рисунку", x, y);
		puts("\nПродолжить?");
		scanf("%d", &sym);
		getchar();
	} while (sym);
}
int check(double x, double y) {
	if ((x >= -1 && x <= 2 && y >= -5 && y <= 5) || (x >= -5 && x <= -1 && y >= -5 && y <= -2) || (x >= 2 && x <= 6 && y >= 2 && y <= 5))
		return 1;

	else
		return 0;
}
int task1() {
	int row, col;
	printf("\n");
	for (row = 1; row <= ROW; ++row) {
		for (col = 1; col <= COL; col++) {
			printf("%5d", col * row);
		}
		printf("\n");
	}
}
int task2() {
	int row, col;
	printf("\n");
	for (row = 1; row <= ROW; ++row) {
		for (col = 1; col <= row; col++) {
			printf("%5d", col * row);
		}
		printf("\n");
	}
}
int task3() {
	int row, col;
	int count = 7;
	printf("\n");
	for (row = 1; row <= count; row++) {
		for (col = row; col <= count; col++) {
			printf("%5d", row * count);
		}
		printf("\n");
	}
}
double fa(double x) {
	double y;
	if (x <= 3)
		return y = x * x - 3 * x + 9;
	else
		return y = 1.0 / (x * x * x + 3);
}
double fb(double x) {
	double y;
	return y = x * exp(sin(x * x));
}
int main() {
	setlocale(LC_ALL, "RUS");
	double x;
	int k;
	printf("Введите значение x: ");
	scanf("%lf", &x);
	printf("Выберите действие:\n");
	printf("1. Вычислить значение F1(x)\n");
	printf("2. Вычислить значение F2(x)\n");
	printf("3. Вычислить произведение разность квадратов и удвоенную сумму\n");
	scanf("%d", &k);
	switch (k) {
	case 1:
		printf("F(x) = %lf\n", fa(x));
		break;
	case 2:
		printf("F(x) = %lf\n", fb(x));
		break;
	case 3:
		printf("произведение = %lf разность квадратов = %lf и удвоенную сумму = %lf", fa(x) * fb(x), (fa(x) * fa(x)) - (fb(x) * fb(x)), (fa(x) + fb(x)) * 2);
		break;
	default:
		printf("Неверный выбор");
	}
}