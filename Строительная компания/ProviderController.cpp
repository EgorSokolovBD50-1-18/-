#include "ProviderController.h" 
#include "AddProvidersController.h"
#include "ReadProvider.h"
#include "DeleteProviders.h"
#include <iostream> 
#include <fstream> 
#include <string> 
#include <Windows.h> 

using namespace std;




void ProviderController()



{
	setlocale(LC_ALL, "Russian");
	string b, c;
	int x;
	cout << "���������� ������� ����������� ������������ ����������\n" << endl;
	cout <<"1.�������� ���������� � �����������\n"
		<< "2.���������� ���������� � �����������\n"
		<< "3.�������������� ���������� � �����������\n"
		<< "4.����� ����������\n"
		<< "5.�����\n" << endl;

	cout << "������� �����:";
	cin >> x;
	switch (x)
	{
	case 1:
		cout << "��������" << endl;
		DeleteProviders();
		cout << "��������� ������� �����" << endl;
		break;
	case 2:
		cout << "����������" << endl;
		AddProviders();
		cout << "��������� ������� ��������" << endl;
		break;
	case 3:
		cout << "��������������" << endl;
		cin >> b;
		cout << "���������� ��� ���������� ������� �������������" << endl;
		break;
	case 4:
		ReadProviders();
		break;
	case 5:
		cout << "�����" << endl;
		return;
		break;



	}

}