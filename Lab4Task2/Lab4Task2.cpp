// Написать свои варианты функций.
// Применить функции к строкам, составляющим массив.
#include <iostream>
#include "string.h"
using namespace std;

int main()
{
	char strOne[200] = "do something";
	char strTwo[200] = "42 wrong number";
	char strArr[][20] = { "It's", "example" };
	int strLengthOne(char*);
	int strLengthTwo(char*);
	int strLengthThree(char*);
	void strCopy(char*, char*);
	void strEquals(char*, char*);
	void strConcat(char*, char*);

	cout << "Длина строки strOne: " << strLengthOne(strOne) << endl;
	cout << "Длина строки strTwo: " << strLengthOne(strTwo) << endl;
	cout << "Длина строки strOne: " << strLengthTwo(strOne) << endl;
	cout << "Длина строки strTwo: " << strLengthTwo(strTwo) << endl;
	cout << "Длина строки strOne: " << strLengthThree(strOne) << endl;
	cout << "Длина строки strTwo: " << strLengthThree(strTwo) << endl;

	strConcat(strOne, strTwo);
	cout << "Объединение строк: " <<  strOne << endl;
	strEquals(strOne, strTwo);
	
	strCopy(strOne, strTwo);
	cout << "Копирование строки: " << strOne << endl;
	strEquals(strOne, strTwo);

	cout << "Длина строки в массиве: " << strLengthOne(strArr[1]) << endl;

	strConcat(strArr[0], strArr[1]);
	cout << "Объединение строк: " << strArr[0] << endl;
	strEquals(strArr[0], strArr[1]);

	strCopy(strArr[0], strArr[1]);
	cout << "Копирование строки: " << strArr[0] << endl;
	strEquals(strArr[0], strArr[1]);
}

int strLengthOne(char* str) {
	string s = str;
	return s.length();
}

int strLengthTwo(char* str) {
	string s = str;
	return s.size();
}

int strLengthThree(char* str) {
	int count = 0;
	string s = str;
	for (char c : s) {
		count++;
	}
	return count;
}

void strCopy(char* dest, char* src) {
	for (int i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[strlen(src)] = '\0';
}

void strEquals(char* s1, char* s2) {
	string str1 = s1;
	string str2 = s2;
	if (str1 == str2) cout << "Строки равны" << endl;
	else cout << "Строки не равны" << endl;
}

void strConcat(char* dest, char* src) {
	int len = strlen(dest);
	for (int i = 0; src[i] != '\0'; i++)
		dest[len + i] = src[i];
}