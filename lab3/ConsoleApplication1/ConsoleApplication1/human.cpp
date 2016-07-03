#include "human.h"
#include <iostream>
using namespace std;

Human::Human()
{


};

void Human::Input()
{

	do
	{
		cout << "Input name: "<<endl;
		cin >> _name;
		fflush(stdin);
		cin.clear();
		cin.ignore();
	} while (!_name);

	do
	{
		cout << "Input surname:"<< endl;
		cin >> _surname;
		fflush(stdin);
		cin.clear();
		cin.ignore();
	} while (!_surname);

	do
	{
		cout << "Input patronimyc: "<<endl;
		cin >> _patronymic;
		fflush(stdin);
		cin.clear();
		cin.ignore();
	} while (!_patronymic);

	do
	{
		cout << "Birthday year "<<endl;
		cin >> _birthYear;
		fflush(stdin);
		cin.clear();
		cin.ignore();
	} while (!_birthYear || _birthYear > 2014 || _birthYear < 1900);


}

void Human::Output()
{
	cout << "Name:  "<<_name<< endl;
	cout << "Surname: " << _surname << endl;
	cout << "Patronymic: " << _patronymic << endl;
	cout << "Birthday year " <<_birthYear<< endl;
}

Human::~Human()
{
	delete[]_name;
	delete[]_surname;
	delete[]_patronymic;
}
