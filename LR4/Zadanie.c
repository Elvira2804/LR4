#include <stdio.h>
#include <locale.h>

int task_1_a(double d);
int task_1_b(char c);
int task_1_v(int i);

int task_2_1(int a, int b);
int task_2_2(int a, int b);

int task_3(int N);

int main() {
	setlocale(LC_CTYPE, "ru_RU.UTF-8");

	//ЗАДАНИЕ 1
	printf("ЗАДАНИЕ 1\n");

	char c;
	int i;
	float f;
	double d;

	printf("Введите вещественное число типа double: ");
	scanf("%lf", &d);

	printf("Введите символ: ");
	scanf(" %c", &c);

	printf("Введите целое число: ");
	scanf("%d", &i);

	printf("Введите вещественное число типа float: ");
	scanf("%f", &f);

	task_1_a(d);
	task_1_b(c);
	task_1_v(i);

	// ЗАДАНИЕ 2
	printf("\nЗАДАНИЕ 2\n");
	int a = 11;
	int b = 3;

	task_2_1(a, b);
	task_2_2(a, b);

	// ЗАДАНИЕ 3
	printf("\nЗАДАНИЕ 3\n");
	int N;
	printf("Введите трехзначное целое число N: ");
	scanf("%d", &N);

	task_3(N);

	return 0;
}

int task_1_a(double d) { // задача 1а
	int int_part = (int)d;
	double frac_part = d - int_part;

	printf("\nВещественное число типа double: %.2lf\n", d);
	printf("Целая часть: %d\n", int_part);
	printf("Дробная часть: %.2f\n\n", frac_part);

	return 0;
}

int task_1_b(char c) { // задача 1б
	printf("Символ: '%c'\n", c);
	printf("Десятичный код (DEC): %d\n", c);
	printf("Шестнадцатеричный код (HEX): %X\n\n", c);

	return 0;
}

int task_1_v(int i) { // задача 1в
	double result = 1.0 / i;
	printf("Целое число: %d\n", i);
	printf("Результат 1/%d равен: %f\n", i, result);

	return 0;
}

int task_2_1(int a, int b) { // пункты 1-5
	int x;
	float y;
	double z;

	x = a / b;
	y = a / b;
	z = a / b;

	printf("Результаты деления int на int (%d / %d):\n", a, b);
	printf("x = %d\n", x);
	printf("y = %.2f\n", y);
	printf("z = %.3lf\n", z);
	printf("Пояснение: при делении целого числа на целое число дробная часть всегда отбрасывается.\n\n");

	return 0;
}

int task_2_2(int a, int b) { // пункт 6
	printf("Преобразование ДО деления:\n");
	printf("Явное преобразование к float:  %.2f\n", (float)a / b);
	printf("Явное преобразование к double: %.3lf\n", (double)a / b);
	printf("\nПреобразование ПОСЛЕ деления:\n");
	printf("Явное преобразование к float:  %.2f\n", (float)(a / b));
	printf("Явное преобразование к double: %.3lf\n\n", (double)(a / b));

	return 0;
}

int task_3(int N) {
	N = N * ((N > 0) - (N < 0));

	int last = N % 10;          // Последняя цифра
	int first = N / 100;        // Первая цифра
	int middle = (N / 10) % 10; // Средняя цифра

	int sum = first + middle + last; // Сумма цифр
	int revers = last * 100 + middle * 10 + first; // Число наоборот

	printf("Обработанное число (без знака): %d\n", N);
	printf("а) Последняя цифра - %d | б) Первая цифра - %d | в) Сумма цифр - %d\n", last, first, sum);
	printf("Число наоборот: %d\n", revers);

	return 0;
}
