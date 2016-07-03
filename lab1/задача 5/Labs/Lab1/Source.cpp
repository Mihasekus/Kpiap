#include <iostream>
#include <locale>

using namespace std;

#define MaxAmount 1000

class cNumber
{
public:
	void NumOut();
	cNumber();
	
private:
	int _myNum;
	static int _amount;
	
};

int cNumber::_amount = 0;

void cNumber::NumOut()
{
	cout << "���������� ����� " << _myNum << endl;
}

cNumber::cNumber()
{
	_myNum = ++_amount;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	int choice, i = 0;
	cNumber* AllObj[MaxAmount];

	for (; i < MaxAmount;)
	{
		cout << "�������� �������?1-�� 2-��� 3-����� ����������" << endl;
		cin >> choice;
		switch (choice)
		{
			default:
				break;
			case 1:
				AllObj[i++] = new cNumber;
				break;
			case 2:
				for (; i>0; i--)
					delete AllObj[i-1];
				exit(0);
			case 3:
				if (i>0)
					AllObj[i-1]->NumOut();
				break;
		}
		

	}
	
	for (; i>0; i--)
		delete AllObj[i-1];
	
}