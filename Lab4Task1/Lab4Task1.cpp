// Познакомиться с библиотечными функциями работы со строками

#include <iostream>
#include "string.h"
using namespace std;

int main() {
	char strOne[32] = "String";
	char strTwo[] = " example";
	char strThree[64];

	cout << "Длина строки \"" << strOne << "\": " << strlen(strOne) << endl;

	strcat_s(strOne, strTwo);
	cout << "Строка после конкатенации: " << strOne << endl;

	strcpy_s(strThree, strOne);
	cout << "Строка 3 после копирования: " << strThree << endl;

	int result = strcmp(strOne, strThree);
	cout << "Результат сравнения строк 1 и 3 : " << result << endl;
}

