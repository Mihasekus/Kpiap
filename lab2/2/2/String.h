#pragma once
#if !defined( STR )
#define STR
#include <iostream>
#endif

using namespace std;

static const int max_string_length = 1000;

class String
{
private:
	int _size = 0;
	char *_string= NULL;
public:
	String();
	String(const char *str);
	String(const String &str);
	~String();
	
	void operator = (const String& str);
	void operator += (String& str);

	friend ostream& operator<<(ostream&, const String&); 
	friend istream& operator>>(istream&, String&);
};