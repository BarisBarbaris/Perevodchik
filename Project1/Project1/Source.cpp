#include <iostream>
#include <string>
#include <string.h>
#include "English.h"
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	int menu = 0;
	cout << "\t\t�����-������� �������\n";
	cout << "1 - ��������� � �������� �� ����������\n";
	cout << "2 - ��������� � ���������� �� �������\n";
	cout << "3 - ������� ���������� �������\n";
	cout << "4 - ������� ������� �������\n";
	cout << "0 - ������� ���������\n";
	show();
	cin >> menu;/*
	switch (menu)
		case 1: cout << "�������� ����������"; 
		case 2: cout << "�������� ����������"; 
		case 3:	show(); 
		case 4: cout << "�������� ����������"; 
		case 0: cout << "�������� ����������"; 
		default: cout << "�������� ����������";  break;*/


}