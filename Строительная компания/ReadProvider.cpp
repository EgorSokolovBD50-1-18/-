#include "ReadProvider.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void ReadProviders()
{
	string a = "Providers.txt";
	ifstream fin;
	fin.open(a);
	if (!fin.is_open())
	{
		cout << "Отказ в доступе к документу" << endl;
	}
	else
	{
		cout << "Открытие файла" << endl;
		char c;
		while (fin.get(c))
		{
			cout << c;
		}
	}
	fin.close();
}