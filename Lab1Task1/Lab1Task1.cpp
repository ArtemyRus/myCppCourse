//Ознакомиться со структурой программы на языке C++. Для этого
//выполнить программу возведения числа 2 в степень. Модифицировать
//программу так, чтобы вычислялась степень с любым основанием.

#include <iostream>
using namespace std;

int main() {
    int i, k, value;
    int power(int, int);
    int getInputNumber();
    value = getInputNumber();
    for (i = 0; i < 10; i++) {
        k = power(value, i);
        cout << "i = " << i << ", k = " << k << endl;
    }
}

int power(int x, int n) {
    int i, p = 1;
    for (i = 1; i <= n; i++)
        p *= x;
    return p;
}

int getInputNumber() {
    int value;
    cout << "Enter power base: ";
    cin >> value;
    return value;
}