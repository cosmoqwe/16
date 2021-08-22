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
		cout << "Введите название книги:";
		getline(cin, book[i].name);
		cout << "Введите автора книги:";
		getline(cin, book[i].author);
		cout << "Введите издательство:";
		getline(cin, book[i].izdatelstvo);
		cout << "Введите жанр книги:";
		getline(cin, book[i].janr);
	}
}
void print(books* book, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << endl << "Книга:" << i + 1 << endl << endl;
		cout << "Название книги:" << book[i].name << endl;
		cout << "Автор книги:" << book[i].name << endl;
		cout << "Издательство:" << book[i].izdatelstvo << endl;
		cout << "Жанр:" << book[i].izdatelstvo << endl;
		if (i < size-1)
		{
			cout << endl << "Книга:" << i + 1 << endl << endl;
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
	cout << "Введите название книги:";
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
			cout << "Ваша книга находится под индексом:" << i + 1 << endl << "Издательство:" << book[i].izdatelstvo << endl << "Автор:" << book[i].author << endl << "Жанр:" << book[i].janr << endl;
			flag = true;
		}
	}
}
void searchbyauthor(books* book, int size)
{
	cin.ignore();
	cout << "Введите автора:";
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
			cout << "Ваша книга находится под индексом:" << i + 1 << endl << "Издательство:" << book[i].izdatelstvo << endl << "Автор:" << book[i].author << endl << "Название:" << book[i].name << endl << "Жанр:" << book[i].janr << endl;
			flag2 = true;
		}
	}
}
void main()
{
	setlocale(0, "");
	const int size = 10;
	books book[size] = {};
	cout << "Вы хотите начать запись из 10 книг?Введите 1 если да или 0, если нет:";
	int choose;
	cin >> choose;
	if (choose == 1)
	{
		add(book, size);
	}
	cout << "Вы хотите вывести 10 книг на экран? Введите 2 если да или 0, если нет:";
	cin >> choose;
	if (choose == 2)
	{
		print(book, size);
	}
	cout << "Выберите действие, которое хотите совершить далее." << endl << "1.Поиск по названию." << endl << "2.Поиск по автору." << endl;
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