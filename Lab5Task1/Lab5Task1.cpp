// Программа, выводящая содержимое текстового файла на экран.
// Дополнить программу функцией подсчета "пустых" и "непустых" символов в файле.
// Дополнить программу функцией поиска в файле заданной подстроки.

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	char ch[50];
	string fileName = "myFile.txt";
    void printText(ifstream&, string);
    void countSymbols(ifstream&, string);
    void findSubStr(ifstream&, string, string);

	ifstream in;
    printText(in, fileName);
    countSymbols(in, fileName);
    string subStr = "hell";
    findSubStr(in, subStr, fileName);
	in.close();
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

void countSymbols(ifstream& in, string fileName) {
    in.open(fileName);
    if (in.is_open())
    {
        char ch;
        int blank = 0, symb = 0;
        while (in.get(ch))
        {
            if (isspace(ch)) blank++;
            else symb++;
        }
        cout << "Количество пустых символов в файле: " << blank << endl;
        cout << "Количество непустых символов в файле: " << symb << endl;
        in.close();
    }
    else cout << "Ошибка чтения файла" << endl;
}

void findSubStr(ifstream& in, string str, string fileName) {
    in.open(fileName);
    if (in.is_open())
    {
        int countLine = 1, i;
        string s;
        while (!in.eof())
        {
            getline(in, s);
            if ((i = s.find(str)) != string::npos) {
                cout << "Строка найдена в тексте: " << countLine << " строка, " << i << " символ." << endl;
                in.close();
                return;
            }
            countLine++;
        }
        cout << "Строка не найдена" << endl;
        in.close();
    }
    else cout << "Ошибка чтения файла" << endl;
}
