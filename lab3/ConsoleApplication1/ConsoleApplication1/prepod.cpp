#include "prepod.h"
#include <iostream>

using namespace std;

Prepod::Prepod()
{
	/*_SciWorks = new string[1];
	_stringAmount = 1;*/

}
void Prepod::Input()
{
	Human::Input();
	do
	{
		cout << "Input rank: "<<endl;
		cin >> _rank;
		fflush(stdin);
		cin.clear();
		cin.ignore();
	} while (!_rank);

	do
	{
		cout << "Input degree:" << endl;
		cin >> _degree;
		fflush(stdin);
		cin.clear();
		cin.ignore();
	} while (!_degree);

	do
	{
		cout << "Input speciality: " << endl;
		cin >> _speciality;
		fflush(stdin);
		cin.clear();
		cin.ignore();
	} while (!_speciality);

	
	//0+7string tempStr;
	do
	{	cout << "Input scientific works: " << endl;
		cin.getline( _SciWorks,40*MAX_LENGTH-1);
		fflush(stdin);
		cin.clear();
		cin.ignore();
		/*if (_stringAmount != 1)
		{

		}
		cin >> _SciWorks[_stringAmount-1];
		cin >> tempStr;
		_text.push_back(tempStr);
		
		fflush(stdin);
		cin.clear();
		cin.ignore();*/
	} while (!_SciWorks);



}

void Prepod::Output()
{
	Human::Output();
	cout << "Degree:  " << _degree << endl;

	cout << "Speciality: " << _speciality << endl;
	cout << "Scientific works: " << _SciWorks << endl;

}

Prepod::~Prepod()
{

	delete[]_rank;
	delete[]_degree;
	delete[]_speciality;
	delete[] _SciWorks;


}
