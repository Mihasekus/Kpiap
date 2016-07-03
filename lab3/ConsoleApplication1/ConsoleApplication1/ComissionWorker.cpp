#include "ComissionWorker.h"
#include <iostream>
#include <list>

using namespace std;


ComissionWorker::ComissionWorker()
{

}

void ComissionWorker::Input()
{
	Human::Input();
	do
	{
		cout << "Input comission name: " << endl;
		cin >> _comissionName;
		fflush(stdin);
		cin.clear();
		cin.ignore();
	} while (!_comissionName);

	do
	{
		cout << "Input comission year: " << endl;
		cin >> _comissionYear;
		fflush(stdin);
		cin.clear();
		cin.ignore();
	} while (!_comissionYear);

	do
	{
		cout << "Input worker number: " << endl;
		cin >> _personalNum;
		fflush(stdin);
		cin.clear();
		cin.ignore();
	} while (!_personalNum);
	do
	{
		cout << "Input autobiography: " << endl;
			cin.getline(_autobiography, 40 * MAX_LENGTH-1);
			fflush(stdin);
			cin.clear();
			cin.ignore();
	} while (!_autobiography);
}
void ComissionWorker::Output()
{
	Human::Output();
	cout << "Comission year: " << _comissionYear << endl;
	cout << "Worker number:  " << _personalNum << endl;
	cout << "Worker autobiography:  " << _autobiography << endl;
}
ComissionWorker::~ComissionWorker()
{
	delete[] _comissionName;
	delete[] _autobiography;
}
