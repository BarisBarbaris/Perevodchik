#include <iostream>
#include <string.h>
#include <string>
#include<Windows.h>
using namespace std;
const int _SIZE = 10;
struct English
{
	int Num1;
	string Word1;
};
struct Russian
{
	int Num2;
	string Word2;
};

English baza[_SIZE] = {{ 1, "Hello" },{ 2, "Love" },{ 3, "Happy" },{ 4, "Sadness" },{ 5, "Sun" },{ 6, "Summer" },{ 7, "Winter" },{ 8, "Spring" },{ 9, "Autumn" },{ 10, "Item" }};
Russian bazaRu[_SIZE] = {{ 1, "Привет" },{ 2, "Любовь" },{ 3, "Счастье" },{ 4, "Грусть" },{ 5, "Солнце" },{ 6, "Лето" },{ 7, "Зима" },{ 8, "Весна" },{ 9, "Осень" },{ 10, "Предмет" }};

void Show1(int num1)
{
	for (int i = 0; i < _SIZE; i++)
	{
		if (num1 == bazaRu[i].Num2)
			cout << "Перевод: " << bazaRu[i].Word2 << endl;
	}
}
void Show2(int num2)
{
	for (int i = 0; i < _SIZE; i++)
	{
		if (num2 == baza[i].Num1)
			cout << "Перевод: " << baza[i].Word1 << endl;
	}
	
}
English search1(string x, English baza[])
{
	for (int i = 0; i < _SIZE; i++)
	{
		if (x == baza[i].Word1)
			Show1(baza[i].Num1);
	}
	return baza[_SIZE];
}
Russian search2(string x, Russian bazaRu[])
{
	for (int i = 0; i < _SIZE; i++)
	{
		if (x == bazaRu[i].Word2)
			Show2(bazaRu[i].Num2);
	}
	return bazaRu[_SIZE];
}
void main()
{
	setlocale(LC_ALL, "");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int menu;
	cout << "Желаете перевести слово на английский или русский? 1 - если английский, 2 - если русский." << endl << "->"; 
	cin >> menu;
	if (menu == 1) {
		string x;
		cout <<  "Введите слово: "; cin >> x;
		search1(x, baza);
	}
	if (menu == 2) {
		string x;
		cout << "Введите слово: "; cin >> x;
		search2(x, bazaRu);
	}
}