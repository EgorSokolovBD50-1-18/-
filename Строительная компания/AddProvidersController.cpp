#include "AddProvidersController.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void AddProviders()
{
	string a, b, c;
	ofstream d("Providers.txt", ios_base :: app);

	cout << "Введите наименование поставщика" << endl;
	cin >> a;
	d << "Наименование поставщика: " << a << endl;

	cout << "Введите типо поставляемого материала" << endl;
	cin >> b;
	d << "Тип поставляемого материала: " << b << endl;

	cout << "Введите цену за 1кг поставляемого материала" << endl;
	cin >> c;
	d << "Цена за 1кг поставляемого материала: " << c << endl;

	d.close();
	system("cls");
	
	cout << "Поставщик успешно добавлен" << endl;
	cout << "Нажмите Enter чтобы выйти" << endl;
}