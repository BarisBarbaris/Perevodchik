#include <iostream>
#include <string>
#include <string.h>
#include "English.h"
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	int menu = 0;
	cout << "\t\tАнгло-русский словарь\n";
	cout << "1 - Перевести с русского на английский\n";
	cout << "2 - Перевести с английский на русский\n";
	cout << "3 - Вивести английский словарь\n";
	cout << "4 - Вивести русский словарь\n";
	cout << "0 - Закрыть программу\n";
	show();
	cin >> menu;/*
	switch (menu)
		case 1: cout << "Вресенно недоступен"; 
		case 2: cout << "Вресенно недоступен"; 
		case 3:	show(); 
		case 4: cout << "Вресенно недоступен"; 
		case 0: cout << "Вресенно недоступен"; 
		default: cout << "Вресенно недоступен";  break;*/


}