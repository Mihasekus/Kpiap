#include <iostream>
#include <stdlib.h>
#include <string>
#include <List>

using namespace std;

class cDate
{
	public:
		unsigned int Day,
			Month,
			Year;
};

enum etype
{ 
	Mananger = 1,
	Worker = 2,
	Tecnician = 3,
	Secretary = 4,
	Security = 5
};

class cEmployee
{
	public:
		void putemploy();
		void getemploy();
	private:
		etype _status;
		int _workerNumber;
		float _salary;
		cDate _date;
};

void cEmployee::getemploy()
{
	float salary;
	int workerNumber = -1,
		day = 0,
		month = 0,
		year = 0,
		status = 0;

	do
	{
		cout << "Worker number: ";
		cin >> workerNumber;
		fflush(stdin);
		cin.clear();
		cin.ignore();
	} while (workerNumber<0);

	do
	{
		cout << "Input worker status \n 1-Mananger \n 2-Worker\n 3-Tecnician\n 4-Secretary\n 5-Security" << endl;
		cin >> status;
		fflush(stdin);
		cin.clear();
		cin.ignore();
	} while (status<1 || status>5);

	do
	{
		cout << "Salary: ";
		cin >> salary;
		fflush(stdin);
		cin.clear();
		cin.ignore();
	} while (salary <= 0 );
	
	do
	{
		cout << "Hire date:\n\tDay: ";
		cin >> day;
		fflush(stdin);
		cin.clear();
		cin.ignore();
	} while (!day || day > 31);
	
	do
	{
		cout << "\tMonth: ";
		cin >> month;
		fflush(stdin);
		cin.clear();
		cin.ignore();
	} while (!month || month > 12);
	
	do
	{
		cout << "\tYear: ";
		cin >> year;
		fflush(stdin);
		cin.clear();
		cin.ignore();
	} while (year < 1950 || year > 2014);
	
	_workerNumber = workerNumber;
	_salary = salary;
	_date.Day = day;
	_date.Month = month;
	_date.Year = year;
	_status = (etype)status;

}

void cEmployee::putemploy()
{
	cout << "\tWorker ¹ " << _workerNumber << endl;
	cout << "Status: ";
	switch (_status)
	{
	case Mananger:
		cout << "Mananger" << endl;
		break;
	case Worker:
		cout << "Worker" << endl;
		break;
	case Tecnician:
		cout << "Tecnician" << endl;
		break;
	case Secretary:
		cout << "Secretary" << endl;
		break;
	case Security:
		cout << "Security" << endl;
		break;
	}
	cout << "Salary: " << _salary << endl;
	cout << "Hire date: " << _date.Day<<"." << _date.Month<<"." << _date.Year << endl;
}

int main()
{
	setlocale(LC_ALL, "Russian");

	list<cEmployee*> employeeList;
	char choice;
	cEmployee *temp;

	do
	{
		system("cls");
		cout << "1 - Add new\n2 - Show all\n3 - Exit" << endl;
		cin >> choice;
		fflush(stdin);

		switch (choice)
		{
		case '1':
			system("cls");
			cout << "\t\tAdding new employee" << endl << endl;
			temp = new cEmployee();
			temp->getemploy();
			employeeList.push_back(temp);
			break;
		case '2':
			system("cls");
			cout << "\t\tEmployee's list" << endl << endl;
			if (employeeList.empty())
				cout << "List is empty..." << endl << endl;
			for each (cEmployee* item in employeeList)
				item->putemploy();
			system("pause");
			break;
		case '3':
			for each (cEmployee* item in employeeList)
				delete item;
			exit(0);
		default:
			break;
		}


	} while (1);
}
