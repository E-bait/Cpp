#include <iostream>
#include <Windows.h>
#include <stdio.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int a;
    printf("Введите число: ");
    scanf("%d", &a);
    a = (a > 0) ? ++a : a -= 2;
    cout << "Res: "<< a << endl;

    return 0;
}