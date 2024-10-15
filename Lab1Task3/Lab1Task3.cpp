//Написать программу, которая меняет местами значения двух
//переменных. В качестве параметра использовать int, int* и int&.


#include <iostream>
using namespace std;

int main() {
	int a = 2, b = 5;
	void obmen1(int, int); // для записи значения в переменную необходимы ссылки в аргументах функции
	void obmen2(int*, int*);
	void obmen3(int&, int&);
	cout << "Before swap: a = " << a << ", b = " << b << endl;
	obmen2(&a, &b);
	cout << "After swap: a = " << a << ", b = " << b << endl;
	cout << "Before swap: a = " << a << ", b = " << b << endl;
	obmen3(a, b);
	cout << "After swap: a = " << a << ", b = " << b << endl;

}

void obmen2(int* a, int* b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

void obmen3(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}