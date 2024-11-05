class MyString
{
	char str[80] = "";
public:
	MyString(const char*);
	MyString();
	MyString(const MyString&);
	MyString& operator=(const MyString&);
	MyString& operator+(const MyString&);
	int operator==(const MyString&);
	int strLen();
	void input();
	void print();
};

