#include <iostream>
#include <locale>;
#include "windows.h";
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int a, b, c;
    cout << "������ ����� a: ";
    cin >> a;
    cout << "������ ����� b: ";
    cin >> b;
    cout << "������ ����� c: ";
    cin >> c;
    int S = 2 * (a * b + a * c + b * c);
    int V = a * b * c;
    cout << "S ������������� �� ��������� ��������� = " << S << "\nV ������������� �� ��������� ��������� = " << V;
}

