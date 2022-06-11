#include <stdio.h>
#include <Windows.h>
#include <iostream>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int a;
	printf("Введите число: ");
	scanf("%d", &a);
	int first = (a / 100) % 10;
	int second = (a / 10) % 10;
	int third = a % 10;
	bool vozrastaet = (first < second&& second < third);
	bool ubivaet = (first > second && second > third);
	printf("%s\n", (vozrastaet) ? "vozrastaet\n" : (ubivaet) ? "ubivaet\n" : "prosto chislo\n");
	return 0;
}
//;_CRT_SECURE_NO_WARNINGS