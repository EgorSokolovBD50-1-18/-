#include "DeleteProviders.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void DeleteProviders()
{
	string a = "Providers.txt";
	ofstream fout;
	fout.open(a);
	if (!fout.is_open())
	{
		cout << "����� � ������� � ���������" << endl;
	}
	else
	{
		fout << ' ';
	}
}