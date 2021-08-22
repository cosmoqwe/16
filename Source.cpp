#include<iostream>
#include<string>
using namespace std;
struct books
{
	string name;
	string author;
	string izdatelstvo;
	string janr;
};
void add(books* book, int size)
{
	cin.ignore();
	for (int i = 0; i < size; i++)
	{
		cout << "������� �������� �����:";
		getline(cin, book[i].name);
		cout << "������� ������ �����:";
		getline(cin, book[i].author);
		cout << "������� ������������:";
		getline(cin, book[i].izdatelstvo);
		cout << "������� ���� �����:";
		getline(cin, book[i].janr);
	}
}
void print(books* book, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << endl << "�����:" << i + 1 << endl << endl;
		cout << "�������� �����:" << book[i].name << endl;
		cout << "����� �����:" << book[i].name << endl;
		cout << "������������:" << book[i].izdatelstvo << endl;
		cout << "����:" << book[i].izdatelstvo << endl;
		if (i < size-1)
		{
			cout << endl << "�����:" << i + 1 << endl << endl;
		}
	}
}
//void sortauthor(books* book, int size)
//{
//	char author[15];
//	gets_s(author);
//	int temp;
//	for (int i = 0; i < size; i++)
//	{
//		if (author == book[i].author)
//		{
//			book[i-1].author = temp;
//			book[i].author = book[i - 1].author;
//			
//		}
//	}
//}
void searchbyname(books* book, int size)
{
	cin.ignore();
	cout << "������� �������� �����:";
	string searchname;
	getline(cin, searchname);
	bool flag = false;
	int i = 0;
	while(flag==false)
	{
		if (searchname != book[i].name)
		{
			i++;
		}
		else
		{
			cout << "���� ����� ��������� ��� ��������:" << i + 1 << endl << "������������:" << book[i].izdatelstvo << endl << "�����:" << book[i].author << endl << "����:" << book[i].janr << endl;
			flag = true;
		}
	}
}
void searchbyauthor(books* book, int size)
{
	cin.ignore();
	cout << "������� ������:";
	string searchauthor;
	getline(cin, searchauthor);
	bool flag2 = false;
	int i = 0;
	while (flag2 == false)
	{
		if (searchauthor != book[i].author)
		{
			i++;
		}
		else
		{
			cout << "���� ����� ��������� ��� ��������:" << i + 1 << endl << "������������:" << book[i].izdatelstvo << endl << "�����:" << book[i].author << endl << "��������:" << book[i].name << endl << "����:" << book[i].janr << endl;
			flag2 = true;
		}
	}
}
void main()
{
	setlocale(0, "");
	const int size = 10;
	books book[size] = {};
	cout << "�� ������ ������ ������ �� 10 ����?������� 1 ���� �� ��� 0, ���� ���:";
	int choose;
	cin >> choose;
	if (choose == 1)
	{
		add(book, size);
	}
	cout << "�� ������ ������� 10 ���� �� �����? ������� 2 ���� �� ��� 0, ���� ���:";
	cin >> choose;
	if (choose == 2)
	{
		print(book, size);
	}
	cout << "�������� ��������, ������� ������ ��������� �����." << endl << "1.����� �� ��������." << endl << "2.����� �� ������." << endl;
		int choose2;
		cin >> choose2;
		if (choose2 == 1)
		{
			searchbyname(book, size);
		}
		if (choose2 == 2)
		{
			searchbyauthor(book, size);
		}
}