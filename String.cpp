#pragma warning (disable : 4996)

#include "String.h"


String::String()
{
	_string = NULL;
	_size = 0;
}

String::~String()
{
	delete[] _string;
}

String::String(const char *str)
{
	if (str != NULL)
	{
		_size = strlen(str);
		_string = new char[_size + 1];
		strcpy(_string, str);
	}
	else
	{
		_size = 0;
		_string = NULL;
	}
}

String::String(const String &str)
{
	delete[] _string;
	_size = str._size;
	_string = new char[_size + 1];
	strcpy(_string, str._string);
}

void String::operator=(const String& str)
{
	delete[] _string;
	_size = str._size;
	_string = new char[_size+1];
	strcpy(_string, str._string);
}

void String::operator+=(String& str)
{
	char *_buf = new char[_size + str._size + 1];
	strcpy(_buf, _string);
	strcpy(_buf + _size, str._string);
	delete[] _string;
	_string = _buf;
	_size += str._size;

}

ostream& operator<<(ostream& s, const String& string1) 
{
	s << string1._string;
	return s;
}

istream& operator>>(istream& s, String& string1)
{
	if (string1._string == NULL)
	{
		string1._string = new char[max_string_length];
	}

	s.get(string1._string,'/n');
	string1._size = strlen(string1._string);
	return s;
}
