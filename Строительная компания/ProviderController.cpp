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
	cout << "Управление списком поставщиков строительных материалов\n" << endl;
	cout <<"1.Удаление информации о поставщиках\n"
		<< "2.Добавление информации о поставщиках\n"
		<< "3.Редактирование информации о поставщиках\n"
		<< "4.Общая информация\n"
		<< "5.Выход\n" << endl;

	cout << "ВВедите номер:";
	cin >> x;
	switch (x)
	{
	case 1:
		cout << "Удаление" << endl;
		DeleteProviders();
		cout << "Поставщик успешно удалён" << endl;
		break;
	case 2:
		cout << "Добавление" << endl;
		AddProviders();
		cout << "Поставщик успешно добавлен" << endl;
		break;
	case 3:
		cout << "Редактирование" << endl;
		cin >> b;
		cout << "Информация про поставщика успешно редактирована" << endl;
		break;
	case 4:
		ReadProviders();
		break;
	case 5:
		cout << "Выход" << endl;
		return;
		break;



	}

}