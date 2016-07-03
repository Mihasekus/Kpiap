#include "PrepodCW.h"
#include <iostream>
using namespace std;


PrepodCW::PrepodCW()
{
	

}

void PrepodCW::Input()
{
	Prepod::Input();
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
		cin.getline(_autobiography, 40 * MAX_LENGTH - 1);
		fflush(stdin);
		cin.clear();
		cin.ignore();
	} while (!_autobiography);
	do
	{
		cout << "Input human's comission works: " << endl;
		cin.getline(_works, 40 * MAX_LENGTH - 1);
		fflush(stdin);
		cin.clear();
		cin.ignore();
	} while (!_works);
}

void PrepodCW::Output()
{
	Prepod::Output();
	cout << "Comission name: " << _comissionName << endl;
	cout << "Worker number: " << _personalNum << endl;
	cout << "Autobiography: " <<_autobiography << endl;
	cout << "Comission works: " << _works<< endl;

}

PrepodCW::~PrepodCW()
{
	delete[] _works;
}
