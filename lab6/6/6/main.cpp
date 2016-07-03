#include <iostream>
#include <string>

using namespace std;

class MyMs
{
public:
	MyMs() = delete;
	MyMs(int num);
	~MyMs();
	int& operator[](int num);
private:
	int size;
	int *ms;
};

int& MyMs::operator[](int num)
{
	if (num < 0 || num >= size)
		throw string("Inacceptable index: "+to_string(num));
	return ms[num];
};

MyMs::MyMs(int num)
{
	size = num;
	ms = new int[num];
	for (int i = 0; i<num; i++)
		ms[i] = i;

};

MyMs::~MyMs()
{
	delete[] ms;
};

int main()
{
	int index;
	int length;
	cout << "Input mas length" << endl;
	cin >> length;
	MyMs MyMas(length);
	do{
		cout<< "Input index" << endl;
		cin >> index;
		try
		{
			cout << MyMas[index] << endl;
		}
		catch (string error)
		{
			cout << error << endl;
		}
		system("pause");
		system("cls");
	} while (true);
}



