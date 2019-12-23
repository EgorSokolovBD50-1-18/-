#include "AddMaterialController.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void AddMaterial()
{
	string a, b, c;
	ofstream d("Materials.txt", ios_base::app);

	cout << "Введите наименование материала" << endl;
	cin >> a;
	d << "Наименование материала: " << a << endl;

	cout << "Введите количество требуемого материала в кг" << endl;
	cin >> b;
	d << "Количсетво требуемого материала в кг: " << b << endl;

	cout << "Введите цену за 1кг требуемого материала" << endl;
	cin >> c;
	d << "Цена за 1кг требуемого материала: " << c << endl;
	d.close();
	system("cls");

	cout << "Нажмите Enter чтобы выйти" << endl;
}