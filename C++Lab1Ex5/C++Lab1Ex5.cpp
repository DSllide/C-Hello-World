#include<iostream>;
#include <locale>;
#include "windows.h";
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << "������ ����� ���� R: ";
	float R;
	cin >> R;
	float Pi = 3.14;
	float circle_length = 2 * Pi * R;
	float circle_S = Pi * R * R;
	cout << "����� ���� = " << circle_S << "\n������� ���� = " << circle_length;


}