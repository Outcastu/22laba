#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>

void ex1() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	printf("Калинкин Андрей\n");
	printf("ЛР22 Задача 2.1\n");
	int a, b, c;
	int p;
	scanf("%d%d%d", &a, &b, &c);
	printf("ввели: %d, %d, %d\n", a, b, c);
	p = a * b * c;
	printf("p =  %d\n", p);
}
void ex2() {
	printf("Калинкин Андрей\n");
	printf("ЛР22 Задача 2.2\n");
	int a, b, c;
	int p;

	// Входной файл
	FILE* fin = fopen("F:\\текстовые файлы\\laba22\\in2.txt", "r+");
	if (fin == NULL) {
		printf("Входной файл не найден");
		return;
	}

	fscanf(fin, "%d%d%d", &a, &b, &c);
	printf("ввели: %d, %d, %d\n", a, b, c);

	p = a * b * c;

	printf("p =  %d\n", p);

	fseek(fin, 0, SEEK_END);
	fprintf(fin, "\np = %d\n", p);

	fclose(fin);
}
void ex3() {
	printf("ЛР22 Задача 3.1\n");
	int a, b, c, d, e;
	int p;
	scanf_s("%d%d%d%d%d", &a, &b, &c, &d, &e);
	printf("ввели:%d, %d, %d, %d, %d\n", a, b, c, d, e);
	//Обработка
	p = a + b + c + d + e;
	printf("p=%d\n", p);
}
void ex3_1() {
	printf("ЛР22 Задача 3.2\n");
	int a, b, c, d, e;
	int p;

	// Открываем файл для чтения и записи
	FILE* fin = fopen("F:\\текстовые файлы\\laba22\\in3.txt", "r+");
	if (fin == NULL) {
		printf("Входной файл не найден");
		return;
	}

	// Читаем данные из файла
	fscanf(fin, "%d%d%d%d%d", &a, &b, &c, &d, &e);
	// логирование ввода
	printf("ввели: %d, %d, %d, %d, %d\n", a, b, c, d, e);

	// Обработка
	p = a + b + c + d + e;

	// логирование вывода
	printf("p = %d\n", p);

	// Перемещаем указатель в конец файла для записи результата
	fseek(fin, 0, SEEK_END);
	fprintf(fin, "\np = %d\n", p); 

	fclose(fin);
}
void ex4() {
	int a[10];
	int n; //кол-во загруженных файлов
	int i; //счетчик для обхода эл-ов массива
	FILE* fin = fopen("F:\\текстовые файлы\\laba22\\in4.txt", "r+");
	if (fin == NULL) {
		printf("Входной файл не найден");
		return;
	}

	fscanf(fin, "%d", &n);
	for (i = 0; i < n; i++) {
		fscanf(fin, "%d", &a[i]);
	}
	fclose(fin);

	printf("Ввели массив a[%d] = ", n);
	for (i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}

	int s = 0;
	for (i = 0; i < n; i++) {
		s += a[i];
	}
	printf("\n");
	float sa = (float)s / n;
	printf("sa = %f\n", sa);

	for (i = 0; i < n; i++) {
		if (a[i] > sa) {
			a[i] *= 10;
		}
	}

	printf("Вывели массив a[%d] = ", n);
	for (i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}

	// Запись в тот же файл
	fin = fopen("F:\\текстовые файлы\\laba22\\in4.txt", "r+");
	if (fin == NULL) {
		printf("Выходной файл не создался");
		return;
	}

	fseek(fin, 0, SEEK_END); // Перемещаем указатель в конец файла
	fprintf(fin, "\nИзмененный массив: ");
	for (i = 0; i < n; i++) {
		fprintf(fin, "%d ", a[i]);
	}

	fclose(fin);
}
void ex5() {
	int a[10];
	int n; // количество загруженных файлов
	int i; // счетчик для обхода эл-ов массива

	// Открываем файл для чтения и записи
	FILE* fin = fopen("F:\\текстовые файлы\\laba22\\in5.txt", "r+");
	if (fin == NULL) {
		printf("Входной файл не найден");
		return;
	}

	// Читаем количество элементов
	fscanf(fin, "%d", &n);
	for (i = 0; i < n; i++) {
		fscanf(fin, "%d", &a[i]);
	}
	fclose(fin);

	// Логирование ввода
	printf("Ввели массив a[%d] = ", n);
	for (i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");

	int s = 0;
	for (i = 0; i < n; i++) {
		s += a[i];
	}
	float sa = (float)s / n;
	printf("sa = %f\n", sa);

	// Обработка массива
	for (i = 0; i < n; i++) {
		if (a[i] % 2 == 0) {
			if (a[i] < sa) {
				a[i] /= 2;
			}
		}
	}

	// Логирование вывода
	printf("Вывели массив a[%d] = ", n);
	for (i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");

	// Запись в тот же файл
	fin = fopen("F:\\текстовые файлы\\laba22\\in5.txt", "r+");
	if (fin == NULL) {
		printf("Выходной файл не создался");
		return;
	}

	// Перемещаем указатель в конец файла для записи результата
	fseek(fin, 0, SEEK_END); // Перемещаем указатель в конец файла
	fprintf(fin, "\nИзмененный массив: ");
	for (i = 0; i < n; i++) {
		fprintf(fin, "%d ", a[i]);
	}

	fclose(fin);
}
void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	ex1();
	ex2();
	ex3();
	ex3_1();
	ex4();
	ex5();
}