// Описать класс для работы со строкой как со стандартным типом данных.

#include <iostream>
#include "MyString.h"

int main()
{
	setlocale(LC_ALL, "rus");
	MyString s1("String #1"), s2, s3(s1), s4;
	s2.input();
	s2 = "String #2";
	s2.print();
	s4 = s1 + s2 + s3;
	std::cout << "Длина s4 = " << s4.strLen() << std::endl;
	s4.print();
	if (s1 == s4)
		std::cout << "Строки s1 и s4 равны";
	else if (s1 == s3)
		std::cout << "Строки s1 и s3 равны";
}