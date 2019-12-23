#include <iostream>
#include <fstream>
#include <string>
#include "ProviderController.h"
#include "MaterialController.h"

using namespace std;


int menu()
{
	setlocale(LC_ALL, "Russian");
	int x;
	cout << "Выберите вариант\n" << endl;
	cout << "1. Перейти к списку поставщиков строительных материалов\n"
		<< "2. Перейти к списку строительных материалов\n"
		<< "3. Выйти из меню\n" << endl;
	cout << "Введите номер:";
	cin >> x;
	return x;
}

int main()
{
	int x = 0;
	while (x != 5)
	{
		x = menu();
		switch (x)
		{
		case 1:
			/*cout << "Переход к списку поставщиков" << endl;*/
			ProviderController();
			break;
		case 2:
			/*cout << "Переход к списку стройматериалов" << endl;*/
			MaterialController();
			break;
		case 3:
			cout << "Выход из программы..." << endl;
			return 0;
			break;
		default:
			cout << "Данного номера не сущетвует" << endl;
			exit;
		}
		system("pause");
		system("cls");
	}
	return 0;
} 