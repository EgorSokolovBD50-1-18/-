#include "AddProvidersController.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void AddProviders()
{
	string a, b, c;
	ofstream d("Providers.txt", ios_base :: app);

	cout << "������� ������������ ����������" << endl;
	cin >> a;
	d << "������������ ����������: " << a << endl;

	cout << "������� ���� ������������� ���������" << endl;
	cin >> b;
	d << "��� ������������� ���������: " << b << endl;

	cout << "������� ���� �� 1�� ������������� ���������" << endl;
	cin >> c;
	d << "���� �� 1�� ������������� ���������: " << c << endl;

	d.close();
	system("cls");
	
	cout << "��������� ������� ��������" << endl;
	cout << "������� Enter ����� �����" << endl;
}