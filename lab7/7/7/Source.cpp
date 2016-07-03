#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

class FileReader
{
	public:
		FileReader();
		~FileReader();
		char operator[](int num);
	private:

};

FileReader::FileReader()
{
	
};

FileReader::~FileReader()
{

};

char FileReader::operator[](int num)
{
	char result;
	ifstream infile("text.txt",ios::ate);

	if (num >= 1 && num <= infile.tellg())
	{
		infile.seekg(num - 1, ios::beg);
		infile.get(result);
		return result;
	}
	else
		throw string("Inavailable index");
};

int main()
{
	setlocale(LC_ALL, "Russian");
	int num;
	char result;
	FileReader One;
	do
	{
		system("cls");
		cout << "Введите номер символа" << endl;
		cin >> num;
		try
		{
			cout << One[num] << endl;
		}
		catch (string mException)
		{
			cout << mException << endl;
		}
		system("pause");
	} while (true);

}