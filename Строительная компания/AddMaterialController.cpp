#include "AddMaterialController.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void AddMaterial()
{
	string a, b, c;
	ofstream d("Materials.txt", ios_base::app);

	cout << "������� ������������ ���������" << endl;
	cin >> a;
	d << "������������ ���������: " << a << endl;

	cout << "������� ���������� ���������� ��������� � ��" << endl;
	cin >> b;
	d << "���������� ���������� ��������� � ��: " << b << endl;

	cout << "������� ���� �� 1�� ���������� ���������" << endl;
	cin >> c;
	d << "���� �� 1�� ���������� ���������: " << c << endl;
	d.close();
	system("cls");

	cout << "������� Enter ����� �����" << endl;
}