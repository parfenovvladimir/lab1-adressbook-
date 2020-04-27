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
		cout << "������ �������?[y/n]";
		cin >> yes_or_no;
		if (yes_or_no == 'y') {
			string f, i, o, tel;
			int vozrast;

			cout << "������� �������:";
			cout << endl;
			cin >> f;

			cout << "������� ���:";
			cout << endl;
			cin >> i;

			cout << "������� ��������:";
			cout << endl;
			cin >> o;

			cout << "������� �������:";
			cout << endl;
			cin >> vozrast;

			cout << "������� ����� ��������:";
			cout << endl;
			cin >> tel;

			kontakt.add(Contact(f + ' ' + i + ' ' + o + ' ', vozrast, tel));
		}
	} while (yes_or_no == 'y'); {
		cout << "��� �����������?" << endl;

		cout << "1.�� ���" << endl;
		
		cout << "2.�� ��������" << endl;

		cout << "3.�� ������" << endl;

		cout << "������� �����: " << endl;

		cin >> command;

		cout << "� ����� ������� �����������?" << endl;

		cout << "�� ����������� [1] , �� �������� [2]";

		cin >> sort;

		kontakt.sort((Contact::Field)command, (Contact::Sort_Order)sort);
		kontakt.print();
		system("pause");
		return 0;
	}
}