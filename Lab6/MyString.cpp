#include <iostream>
#include "MyString.h"
#include "strFoo.h"
#include "strFoo.cpp"

MyString::MyString() {}
MyString::MyString(const char* s) {
	strCopy(this->str, s);
}

MyString::MyString(const MyString& s) {
	strCopy(this->str, s.str);
}

MyString& MyString::operator=(const MyString& s) {
	strCopy(this->str, s.str);
	return *this;
}

MyString& MyString::operator+(const MyString& s) {
	strConcat(this->str, s.str);
	return *this;
}

int MyString::operator==(const MyString& s) {
	if (strEquals(this->str, s.str) == 0)
		return 1;
	else return 0;
}

int MyString::strLen() {
	return strLengthOne(this->str);
}

void MyString::input() {
	std::cin >> this->str;
}

void MyString::print() {
	std::cout << this->str << std::endl;
}
