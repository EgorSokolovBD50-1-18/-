#include "MaterialController.h"
#include "AddMaterialController.h"
#include "DeleteMaterial.h"
#include "ReadMaterial.h"
#include <iostream>
#include <fstream>
#include <string>
#include <Windows.h>

using namespace std;

void MaterialController()

{

	setlocale(LC_ALL, "Russian");
	string a,c;
	int x;
	cout << "���������� ������� ����������� ������������ ����������\n" << endl;
	cout << "1.�������� ���������� � ���������������\n"
		<< "2.���������� ���������� � ���������������\n"
		<< "3.�������������� ���������� � ���������������\n"
		<< "4.����� ����������\n"
		<< "5.�����\n" << endl;

	cout << "������� �����:";
	cin >> x;
	switch (x)
	{
	case 1:
		cout << "��������" << endl;
		DeleteMaterial();
		cout << "�������� ���������� ��������� �������" << endl;
		break;
	case 2:
		cout << "����������" << endl;
		AddMaterial();
		cout << "���������� ���������� ��������� �������" << endl;
		break;
	case 3:
		cout << "��������������" << endl;
		cin >> c;
		cout << "�������������� ���������� ��������� �������" << endl;
		break;
	case 4:
		ReadMaterial();
		break;
	case 5:
		cout << "�����" << endl;
		return;
		break;



	}
}