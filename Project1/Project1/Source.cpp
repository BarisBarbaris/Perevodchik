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
English baza[SIZE];Russian baza1[SIZE];
English Baze(English baza[])
{
	
	baza[0] = { 1, "Hello" };
	baza[1] = { 2, "Love" };
	baza[2] = { 3, "Happy" };
	baza[3] = { 4, "Sadness" };
	baza[4] = { 5, "Sun" };
	baza[5] = { 6, "Summer" };
	baza[6] = { 7, "Winter" };
	baza[7] = { 8, "Spring" };
	baza[8] = { 9, "Autumn" };
	baza[9] = { 10, "Item" };
}
Russian Baze1(Russian baza1[])
{
	
	baza1[0] = { 1, "������" };
	baza1[1] = { 2, "������" };
	baza1[2] = { 3, "�������" };
	baza1[3] = { 4, "������" };
	baza1[4] = { 5, "������" };
	baza1[5] = { 6, "����" };
	baza1[6] = { 7, "����" };
	baza1[7] = { 8, "�����" };
	baza1[8] = { 9, "�����" };
	baza1[9] = { 10, "�������" };
}

English search1(string x, English baza[])
{
	for (int i = 0; i < SIZE; i++)
	{
		if (x == baza[i].Word1)
			Show1(baza[i].Num1);
	}
}
Russian search2(string x, Russian baza1[])
{
	for (int i = 0; i < SIZE; i++)
	{
		if (x == baza1[i].Word2)
			Show2(baza1[i].Num2);
	}
}
void Show1(int num1)
{
	for (int i = 0; i < SIZE; i++)
	{
		if (num1 == baza1[i].Num2)
			cout << "�������: " << baza[i].Word1 << endl;
	}
}
void Show2(int num2)
{
	for (int i = 0; i < SIZE; i++)
	{
		if (num2 == baza[i].Num1)
			cout << "�������: " << baza1[i].Word2 << endl;
	}
}
void main()
{
	setlocale(LC_ALL, "");
	int menu;
	cout << "������� ��������� ����� �� ���������� ��� �������? 1 - ���� ����������, 2 - ���� �������." << endl << "->"; cin >> menu;
	if (menu == 1) {
		string x;
		cout <<  "������� �����: "; cin >> x;
		search1(x, baza);
	}
	if (menu == 1) {
		string x;
		cout << "������� �����: "; cin >> x;
		search2(x, baza1);
	}


}
//English Enter(English x)
//{
//	cout << "============================" << endl;
//	cout << "������� ��� ��������: ";
//	cin.ignore();
//	getline(cin, x.Word1);
//	cout << "============================" << endl;
//	number1++;
//	x.Num1 = number1;
//	return x;
//}
//Russian Enter1(Russian x)
//{
//	cout << "============================" << endl;
//	cout << "������� ��� ��������: ";
//	cin.ignore();
//	getline(cin, x.Word2);
//	cout << "============================" << endl;
//	return x;
//}