#pragma once 
#define STR
#include <iostream>
#include "String.h"
#include <stdlib.h>

using namespace std;

void main()
{
	setlocale( 0, "Russian" );
	String str1, str2;
	int choice;
	do
	{
		cout << "Введите 1ю строку: ";
		cin >> str1;
		cin.ignore(15,'\n');
		cout << "Введите 2ю строку: ";
		cin >> str2;
		cin.ignore(15,'\n');

		cout << "Выберите действие \n"
			<< "1-приравнять строки\n"
			<< "2-сложить строки\n"
			<< "3-выход\n";
		while (true)
		{
			cin >> choice;
			if (choice < 1 || choice > 3)
				cin.clear(ios::failbit);
			if (cin.good())
			{
				cin.ignore(15, '\n');
				break;
			}
			cin.clear();
			cin.ignore(15,'\n');
			cout << "Ошибка! Повторите ввод: " ;
		}
		switch (choice)
		{
			case 1:
				str1 = str2;
				cout << "1-я строка: " << str1 << endl;
				cout << "2-я строка: " << str2 << endl;
				system("pause");
				break;
			case 2:
				str1 += str2;
				cout << "Результат: " << str1 << endl;
				system("pause");
				break;
			case 3:
				system("pause");
				return;
		}
		system("cls");
		
	} while (true);
}