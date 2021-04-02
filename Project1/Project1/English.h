#pragma once

#include<iostream>
#include<string>
using namespace std;
const int SIZE_ENG = 100;
string ENG[SIZE_ENG];
void Base()
{
	ENG[0] = "monday";
	ENG[1] = "tuesday";
	ENG[2] = "wednesday";
	ENG[3] = "thursday";
	ENG[4] = "friday";
	ENG[5] = "saturday";
	ENG[6] = "sunday";
	ENG[7] = "hello";
	ENG[8] = "world";
}
void show()
{
	for (int i = 0; i < SIZE_ENG; i++)
		if (ENG[i] != "\0")
			cout << ENG[i];
		else
			break;
}
