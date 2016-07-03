#include "ComissionWorker.h"
#include "prepod.h"
#include "human.h"
#include "PrepodCW.h"

#include <string>
#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
	char choice = '0', what = '0';
	Human* temp = nullptr;
	setlocale(LC_ALL, "Russian");
	do
	{

		do
		{

			cout << ("1-Ввод информации") << endl;
			cout << ("2-Вывод информации") << endl;
			cout << ("3-Выход ") << endl;
			cin >> what;
			/*	fflush(stdin);
				cin.clear();
				cin.ignore();*/
			switch (what)
			{
			case '1':
				do
				{
					cout << ("Ввод информации о...") << endl;
					cout << ("1-человек") << endl;
					cout << ("2-преподаватель") << endl;
					cout << ("3-сотрудник комиссии") << endl;
					cout << ("4-преподаватель-сотрудник комиссии") << endl;
					cin >> choice;
					/*	fflush(stdin);
						cin.clear();
						cin.ignore();*/
					if (choice != '1' && choice != '2' && choice != '3' && choice != '4')
						cout << ("Ошибка-повторите ввод") << endl;
				} while (choice != '1' && choice != '2' && choice != '3' && choice != '4');

				switch (choice)
				{
				case '1':
					temp = new Human();
					
					break;
				case '2':
					temp = new Prepod();
				
					break;
				case '3':
					temp = new ComissionWorker();
				
					break;
				case '4':
					temp = new PrepodCW();
				
					break;
				default:
					break;
				}
				temp->Input();
				break;

			case '2':
				if (choice == '0')
				{
					cout << "Ошибка.Не введены данные" << endl;
					system("pause");
					break;
				}
				else
					temp->Output();
				break;
			case '3':
				exit(0);
			}
		} while (what != '1' && what != '2' && what != '3');
	}while (true);

	return 0;
}


	//list<Human*> HumanList;
	//char choice;
	//Human *temp;
		//list<string> _text;
	//cout << "Input scientific works: " << endl;
	//string tempStr;
	//do
	//{
	//	
	//	fflush(stdin);
	//	cin.clear();
	//	cin.ignore();
	//} while (true);
	//do
	//{
	//	cin >> tempStr;
	//if (!tempStr[0])
	//	break;
	//_text.push_back(tempStr);
	//} 
	//while (cin.);