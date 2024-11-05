#include <iostream>
#include "string.h"
#include "strFoo.h"
using namespace std;

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

void strCopy(char* dest, const char* src) {
	for (int i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[strlen(src)] = '\0';
}

int strEquals(char* s1, const char* s2) {
	string str1 = s1;
	string str2 = s2;
	if (str1 == str2) return 0;
	else if (str1 > str2) return 1;
	else return -1;
}

void strConcat(char* dest, const char* src) {
	int len = strlen(dest);
	for (int i = 0; src[i] != '\0'; i++)
		dest[len + i] = src[i];
}