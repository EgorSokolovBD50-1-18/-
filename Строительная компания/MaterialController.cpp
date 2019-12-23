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
	cout << "Управление списком поставщиков строительных материалов\n" << endl;
	cout << "1.Удаление информации о стройматериалах\n"
		<< "2.Добавление информации о стройматериалах\n"
		<< "3.Редактирование информации о стройматериалах\n"
		<< "4.Общая информация\n"
		<< "5.Выход\n" << endl;

	cout << "ВВедите номер:";
	cin >> x;
	switch (x)
	{
	case 1:
		cout << "Удаление" << endl;
		DeleteMaterial();
		cout << "Удаление информации выполнено успешно" << endl;
		break;
	case 2:
		cout << "Добавление" << endl;
		AddMaterial();
		cout << "Добавление информации выполнено успешно" << endl;
		break;
	case 3:
		cout << "Редактирование" << endl;
		cin >> c;
		cout << "Редактирование информации выполнено успешно" << endl;
		break;
	case 4:
		ReadMaterial();
		break;
	case 5:
		cout << "Выход" << endl;
		return;
		break;



	}
}