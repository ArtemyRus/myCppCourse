// Написать свои варианты функций.
// Применить функции к строкам, составляющим массив.
#include <iostream>
#include "string.h"
#include "strFoo.h"
using namespace std;

int main()
{
	char strOne[200] = "do something";
	char strTwo[200] = "42 wrong number";
	char strArr[][20] = { "It's", "example" };

	cout << "Длина строки strOne: " << strLengthOne(strOne) << endl;
	cout << "Длина строки strTwo: " << strLengthOne(strTwo) << endl;
	cout << "Длина строки strOne: " << strLengthTwo(strOne) << endl;
	cout << "Длина строки strTwo: " << strLengthTwo(strTwo) << endl;
	cout << "Длина строки strOne: " << strLengthThree(strOne) << endl;
	cout << "Длина строки strTwo: " << strLengthThree(strTwo) << endl;

	strConcat(strOne, strTwo);
	cout << "Объединение строк: " <<  strOne << endl;
	cout << "Сравнение строк: " << strEquals(strOne, strTwo) << endl;
	
	strCopy(strOne, strTwo);
	cout << "Копирование строки: " << strOne << endl;
	cout << "Сравнение строк: " << strEquals(strOne, strTwo) << endl;

	cout << "Длина строки в массиве: " << strLengthOne(strArr[1]) << endl;

	strConcat(strArr[0], strArr[1]);
	cout << "Объединение строк: " << strArr[0] << endl;
	cout << "Сравнение строк: " << strEquals(strOne, strTwo) << endl;

	strCopy(strArr[0], strArr[1]);
	cout << "Копирование строки: " << strArr[0] << endl;
	cout << "Сравнение строк: " << strEquals(strOne, strTwo) << endl;
}

