#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

class Unique
{
	public:
		Unique();
		~Unique();
		void Input();
		bool operator==(const Unique& One);
	private:
		string Our;
};

Unique::Unique()
{

};

Unique::~Unique()
{

};


void Unique::Input()
{
	cout << "������� ������" << endl;
	cin >> Our;
};

template <class Q>
bool isEqualto(Q temp1,Q temp2)
{
	if (temp1 == temp2)
		return true;
	else
		return false;
}

bool Unique::operator==(const Unique& One)
{
	if (this->Our == One.Our)
		return true;
	else
		return false;
		
}

int main()
{
	setlocale(LC_ALL, "Russian");
	char choice;
	int temp1;
	int temp2;
	float temp3;
	float temp4;
	char temp5;
	char temp6;
	bool check = 0;
	Unique temp7;
	Unique temp8;
	cout << "���������� ������ ���� �� ������ ����������?" << endl;
	do
	{
		cout << "1-int" << endl;
		cout << "2-float" << endl;
		cout << "3-char" << endl;
		cout << "4-���������������� ���" << endl;
		cin >> choice;
	} while (choice != '1' && choice != '2' && choice != '3' && choice != '4');
	switch (choice)
	{
	case '1':
		cout << "������� 1� ����������" << endl;
		cin >> temp1;
		cout << "������� 2� ����������" << endl;
		cin >> temp2;

		check = isEqualto(temp1, temp2);
		if (check == 0)
			cout << "Not equal" << endl;
		else
			cout << "Equal" << endl;
		system("pause");
		break;

	case '2':
		cout << "������� 1� ����������" << endl;
		cin >> temp3;
		cout << "������� 2� ����������" << endl;
		cin >> temp4;
		check = isEqualto(temp3, temp4);
		if (check == 0)
			cout << "Not equal" << endl;
		else
			cout << "Equal" << endl;

		system("pause");
		break;

	case '3':
		cout << "������� 1� ����������" << endl;
		cin >> temp5;
		cout << "������� 2� ����������" << endl;
		cin >> temp6;

		check = isEqualto(temp5, temp6);
		if (check == 0)
			cout << "Not equal" << endl;
		else
			cout << "Equal" << endl;
		system("pause");
		break;

	case '4':
		cout << "������� 1� ����������" << endl;
		temp7.Input();
		cout << "������� 2� ����������" << endl;
		temp8.Input();
		check = isEqualto(temp7, temp8);
		if (check == 0)
			cout << "Not equal" << endl;
		else
			cout << "Equal" << endl;
		system("pause");

		break;
	default:
		break;
	}
}