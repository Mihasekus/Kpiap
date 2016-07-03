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
		cout << "������� 1� ������: ";
		cin >> str1;
		cin.ignore(15,'\n');
		cout << "������� 2� ������: ";
		cin >> str2;
		cin.ignore(15,'\n');

		cout << "�������� �������� \n"
			<< "1-���������� ������\n"
			<< "2-������� ������\n"
			<< "3-�����\n";
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
			cout << "������! ��������� ����: " ;
		}
		switch (choice)
		{
			case 1:
				str1 = str2;
				cout << "1-� ������: " << str1 << endl;
				cout << "2-� ������: " << str2 << endl;
				system("pause");
				break;
			case 2:
				str1 += str2;
				cout << "���������: " << str1 << endl;
				system("pause");
				break;
			case 3:
				system("pause");
				return;
		}
		system("cls");
		
	} while (true);
}