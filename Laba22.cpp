#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>

void ex1() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	printf("�������� ������\n");
	printf("��22 ������ 2.1\n");
	int a, b, c;
	int p;
	scanf("%d%d%d", &a, &b, &c);
	printf("�����: %d, %d, %d\n", a, b, c);
	p = a * b * c;
	printf("p =  %d\n", p);
}
void ex2() {
	printf("�������� ������\n");
	printf("��22 ������ 2.2\n");
	int a, b, c;
	int p;
	// ������� ����
	FILE* fin = fopen("F:\\����\\�� � �\\Labs\\laba22\\in2.txt", "rt");
	if (fin == NULL) {
		printf("������� ���� �� ������");
		return;
	}
	fscanf(fin, "%d%d%d", &a, &b, &c);
	fclose(fin);
	// ����������� �����
	printf("�����: %d, %d, %d\n", a, b, c);
	// ���������
	p = a * b * c;
	// ����������� ������
	printf("p =  %d\n", p);
	// ������ � �������� ����
	// �������� ����
	FILE* fout;
	fout = fopen("F:\\����\\�� � �\\Labs\\laba22\\out2.txt", "wt");
	if (fout == NULL) {
		printf("�������� ���� �� ��������");
		return;
	}
	fprintf(fout, "%d", p);
	fclose(fout);
}
void ex3() {
	printf("��22 ������ 3.1\n");
	int a, b, c, d, e;
	int p;
	scanf_s("%d%d%d%d%d", &a, &b, &c, &d, &e);
	printf("�����:%d, %d, %d, %d, %d\n", a, b, c, d, e);
	//���������
	p = a + b + c + d + e;
	printf("p=%d\n", p);
}
void ex4() {
	int a[10];
	int n;//���-�� ����������� ������
	int i; //������� ��� ������ ��-�� �������
	FILE* fin = fopen("F:\\����\\�� � �\\Labs\\laba22\\in4.txt", "rt");
	if (fin == NULL) {
		printf("������� ���� �� ������");
		return;
	}
	fscanf(fin, "%d", &n);
	for (i = 0; i < n; i++) {
		fscanf(fin, "%d", &a[i]);
	}
	fclose(fin);
	printf("����� ������ a[%d] = ", n);
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
	printf("������ ������ a[%d] = ", n);
	for (i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}
	FILE* fout;
	fout = fopen("F:\\����\\�� � �\\Labs\\laba22\\out4.txt", "wt");
	if (fout == NULL) {
		printf("�������� ���� �� ��������");
		return;
	}
	fprintf(fout, "%d\n", n);
	for (i = 0; i < n; i++) {
		fprintf(fout, "%d ", a[i]);
	}
	fclose(fout);
}
void ex5() {
	int a[10];
	int n;//���-�� ����������� ������
	int i; //������� ��� ������ ��-�� �������
	FILE* fin = fopen("F:\\����\\�� � �\\Labs\\laba22\\in5.txt", "rt");
	if (fin == NULL) {
		printf("������� ���� �� ������");
		return;
	}
	fscanf(fin, "%d", &n);
	for (i = 0; i < n; i++) {
		fscanf(fin, "%d", &a[i]);
	}
	fclose(fin);
	printf("����� ������ a[%d] = ", n);
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
		if (a[i] % 2 == 0) {
			if (a[i] < sa) {
				a[i] /= 2;
			}
		}
	}
	printf("������ ������ a[%d] = ", n);
	for (i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}
	FILE* fout;
	fout = fopen("F:\\����\\�� � �\\Labs\\laba22\\out5.txt", "wt");
	if (fout == NULL) {
		printf("�������� ���� �� ��������");
		return;
	}
	fprintf(fout, "%d\n", n);
	for (i = 0; i < n; i++) {
		fprintf(fout, "%d ", a[i]);
	}
	fclose(fout);
}
void HW() {
	int a[10];
	int n;//���-�� ����������� ������
	int i; //������� ��� ������ ��-�� �������
	FILE* fin = fopen("F:\\����\\�� � �\\Labs\\laba22\\in6.txt", "rt");
	if (fin == NULL) {
		printf("������� ���� �� ������");
		return;
	}
	fscanf(fin, "%d", &n);
	for (i = 0; i < n; i++) {
		fscanf(fin, "%d", &a[i]);
	}
	fclose(fin);
	printf("����� ������ a[%d] = ", n);
	for (i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");
	for (int i = 0; i < n; i++) {
		if (a[i] % 2 == 1) {
			a[i] *= 10;
		}
	}
	printf("������ ������ a[%d] = ", n);
	for (i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");
	FILE* fout;
	fout = fopen("F:\\����\\�� � �\\Labs\\laba22\\out6.txt", "wt");
	if (fout == NULL) {
	printf("�������� ���� �� ��������");
	return;
	}
	fprintf(fout, "%d\n", n);
	for (i = 0; i < n; i++) {
		fprintf(fout, "%d ", a[i]);
	}
	fclose(fout);
}
void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	ex3();
}