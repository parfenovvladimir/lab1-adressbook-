#include "adressbook.h"
#include<iostream>
#include<string>
using namespace std;

void Adressbook::add(const Contact& people) {                                             //Добавление контакта
	data.push_back(people);
}

void Adressbook::print() {						                                          //Вывод контактов на экран				
	for (int i = 0; i < data.size(); i++) {
		cout << "ФИО: ";
		cout << data[i].fio << endl;
		cout << "Возраст : ";
		cout << data[i].vozrast << endl;
		cout << "Телефон: ";
		cout << data[i].tel << endl;
		cout << endl;
	}
}

void Adressbook::sort(Contact::Field contact, Contact::Sort_Order sortirovka)          //Сортировка контактов
{
	if (data.size() != 0)																  //Если есть контакты
	{
		for (int i = 0; i < data.size() - 1; i++)
		{
			for (int j = 0; j < data.size() - 1 - i; j++)
			{
				if (sortirovka == 1)
				{
					switch (contact)
					{
					case Contact::Fio:
						if (data[j].fio > data[j + 1].fio)
						{
							swap(data[j], data[j + 1]);
						}
						break;

					case Contact::Vozrast:
						if (data[j].vozrast > data[j + 1].vozrast)
						{
							swap(data[j], data[j + 1]);
						}
						break;

					case Contact::Tel:
						if (data[j].tel > data[j + 1].tel)
						{
							swap(data[j], data[j + 1]);
						}
						break;
					default:
						break;
					}
				}
				else
					if (sortirovka == 2)
					switch (contact)
					{
					case Contact::Fio:
						if (data[j].fio < data[j + 1].fio)
						{
							swap(data[j], data[j + 1]);
						}
						break;

					case Contact::Vozrast:
						if (data[j].vozrast < data[j + 1].vozrast)
						{
							swap(data[j], data[j + 1]);
						}
						break;

					case Contact::Tel:
						if (data[j].tel < data[j + 1].tel)
						{
							swap(data[j], data[j + 1]);
						}
						break;
					default:
						break;
					}
			}

		}
	}

}