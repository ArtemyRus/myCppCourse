// Написать программу-шифратор файлов.

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	string key;
	cout << "Введите ключ: " << endl;
	cin >> key;
	ifstream in("text.txt");
	ofstream out("encryptedText.txt");
	void printText(ifstream&, string);
	if (in.is_open() && out.is_open()) {
		char ch;
		int i = 0;
		while (in.get(ch)) {
			out << (char)(ch ^ key[i]);
		}
		in.close();
		out.close();
	}
	else cout << "Ошибка чтения / записи файла." << endl;

	in.open("encryptedText.txt");
	out.open("decryptedText.txt");
	if (in.is_open() && out.is_open()) {
		char ch;
		int i = 0;
		while (in.get(ch)) {
			out << (char)(ch ^ key[i]);
		}
		in.close();
		out.close();
	}
	else cout << "Ошибка чтения / записи файла." << endl;

	printText(in, "text.txt");
	printText(in, "encryptedText.txt");
	printText(in, "decryptedText.txt");
}

void printText(ifstream& in, string fileName) {
	in.open(fileName);
	if (in.is_open())
	{
		string s;
		while (!in.eof())
		{
			getline(in, s);
			cout << s << endl;
		}
		in.close();
	}
	else cout << "Ошибка чтения файла" << endl;
}
