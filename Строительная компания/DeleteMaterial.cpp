#include "DeleteMaterial.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void DeleteMaterial()
{
	string a = "Materials.txt";
	ofstream fout;
	fout.open(a);
	if (!fout.is_open())
	{
		cout << "Отказ в доступе к документу" << endl;
	}
	else
	{
		fout << ' ';
	}
}