#include <iostream>
#include <string.h>
#include <string>
using namespace std;
const int SIZE = 10;
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

English baza[SIZE] = {{ 1, "Hello" },{ 2, "Love" },{ 3, "Happy" },{ 4, "Sadness" },{ 5, "Sun" },{ 6, "Summer" },{ 7, "Winter" },{ 8, "Spring" },{ 9, "Autumn" },{ 10, "Item" }};
Russian baza1[SIZE] ={{ 1, "������" },{ 2, "������" },{ 3, "�������" },{ 4, "������" },{ 5, "������" },{ 6, "����" },{ 7, "����" },{ 8, "�����" },{ 9, "�����" },{ 10, "�������" }};

void Show1(int num1)
{
	for (int i = 0; i < SIZE; i++)
	{
		if (num1 == baza1[i].Num2)
			cout << "�������: " << baza1[i].Word2 << endl;
	}
}
void Show2(int num2)
{
	for (int i = 0; i < SIZE; i++)
	{
		if (num2 == baza[i].Num1)
			cout << "�������: " << baza[i].Word1 << endl;
	}
	
}
English search1(string x, English baza[])
{
	for (int i = 0; i < SIZE; i++)
	{
		if (x == baza[i].Word1)
			Show1(baza[i].Num1);
	}
	return baza[SIZE];
}
Russian search2(string x, Russian baza1[])
{
	for (int i = 0; i < SIZE; i++)
	{
		if (x == baza1[i].Word2)
			Show2(baza1[i].Num2);
	}
	return baza1[SIZE];
}
void main()
{
	setlocale(LC_ALL, "");
	int menu;
	cout << "������� ��������� ����� �� ���������� ��� �������? 1 - ���� ����������, 2 - ���� �������." << endl << "->"; 
	cin >> menu;
	if (menu == 1) {
		string x;
		cout <<  "������� �����: "; cin >> x;
		search1(x, baza);
	}
	if (menu == 2) {
		string x;
		cout << "������� �����: "; cin >> x;
		search2(x, baza1);
	}
}