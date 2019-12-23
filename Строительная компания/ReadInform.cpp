#include "ReadInform.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void ReadMaterial()
{
	string a = "Materials.txt";
	ifstream fin;
	fin.open(a);
	if (!fin.is_open())
	{
		cout << "Отказ в доступе к документу" << endl;
	}
	else
	{
		cout << "Открытие файла" << endl;
		char b;
		while (fin.get(b))
		{
			cout << b;
		}
	}
	fin.close();
}