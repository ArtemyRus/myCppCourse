// Написать программы, сортирующие одномерный массив методами пузырька и быстрой сортировки.
// Выполнить сортировку по возрастанию четных и по убыванию нечетных значений.

#include <iostream>
#include "BubbleSort.h"
#include "PrintArray.h"
#include "QuickSort.h"
using namespace std;

int main() {
	// сортировка методом пузырька
	int firstArr[] = { 2, 5, 12, 3, 16, 19, 1, 3, 5, 14, 7 };
	int sizeFirst = sizeof(firstArr) / sizeof(int);
	cout << "До сортировки: " << endl;
	printArray(firstArr, sizeFirst);
	bubbleSort(firstArr, sizeFirst);
	cout << "Сортировка пузырьком: " << endl;;
	printArray(firstArr, sizeFirst);

	// быстрая сортировка
	int secondArr[] = { 4, -8, 12, 3, -5, 9, 10, -1 };
	int sizeSecond = sizeof(secondArr) / sizeof(int);
	cout << "До сортировки: " << endl;
	printArray(secondArr, sizeSecond);
	quickSort(secondArr, 0, sizeSecond - 1);
	cout << "Быстрая сортировка: " << endl;;
	printArray(secondArr, sizeSecond);

	// сортировка по возрастанию четных и по убыванию нечетных значений
	int a[] = { 3, 2, 1, 10, 15, 6, 24, 12, 9 };
	int sizeA = sizeof(a) / sizeof(int);
	cout << "До сортировки: " << endl;
	printArray(a, sizeA);
	for (int i = 0; i < sizeA - 1; i++)
		for (int j = i + 1; j < sizeA; j++){
			if ((a[i] % 2 == 0 && a[j] % 2 == 0 && a[i] > a[j]) || (a[i] % 2 != 0 && a[j] % 2 != 0 && a[i] < a[j])){
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	printArray(a, sizeA);
}