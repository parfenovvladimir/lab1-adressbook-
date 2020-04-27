#include<iostream>
#include<ostream>
#include<string>
#include<Windows.h>
#include "adressbook.h"

using namespace std;

int main() {
	Adressbook&kontakt = Adressbook::Instance();
	char yes_or_no;
	int command;
	int sort;
	//ifstream cin("input.txt");
	//ofstream cout("output.txt"); 
	setlocale (LC_ALL ,"rus");
	do {
		cout << "Ввести контакт?[y/n]";
		cin >> yes_or_no;
		if (yes_or_no == 'y') {
			string f, i, o, tel;
			int vozrast;

			cout << "Введите Фамилию:";
			cout << endl;
			cin >> f;

			cout << "Введите Имя:";
			cout << endl;
			cin >> i;

			cout << "Введите Отчество:";
			cout << endl;
			cin >> o;

			cout << "Введите Возраст:";
			cout << endl;
			cin >> vozrast;

			cout << "Введите Номер телефона:";
			cout << endl;
			cin >> tel;

			kontakt.add(Contact(f + ' ' + i + ' ' + o + ' ', vozrast, tel));
		}
	} while (yes_or_no == 'y'); {
		cout << "Как сортировать?" << endl;

		cout << "1.По ФИО" << endl;
		
		cout << "2.По возрасту" << endl;

		cout << "3.По номеру" << endl;

		cout << "Введите число: " << endl;

		cin >> command;

		cout << "В каком порядке сортировать?" << endl;

		cout << "По возрастанию [1] , По убыванию [2]";

		cin >> sort;

		kontakt.sort((Contact::Field)command, (Contact::Sort_Order)sort);
		kontakt.print();
		system("pause");
		return 0;
	}
}