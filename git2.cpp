﻿#include "stdafx.h"
#include <iostream>
#include "vich.h"
using namespace std;

int(vib);
double a;
double b;

int main() {
setlocale(LC_ALL, "rus");
	//Ввод переменных
	cout << "Введите первое число: ";
	cin >> a;
	cout << "Введите второе число: ";
	cin >> b;
	// выбор действия
	cout << "Выберите действие:" << endl;
	cout << "1 - сложение        3 - умножение" << endl;
	cout << "2 - вычитание       4 - деление" << endl;
	cin >> vib;
	
	switch (vib)
	{
	case 1: 
		cout << MySum(a,b) << endl;
		break;//Сложение
	case 2:
		cout << MySub(a,b) << endl;
		break;//Вычитание
	case 3: 
		cout << MyMul(a,b) << endl;
		break;//Деление
	case 4: 
		cout << MyDiv(a,b) << endl;
		break;//Умножение
	}
	system("pause");
	return 0;
}