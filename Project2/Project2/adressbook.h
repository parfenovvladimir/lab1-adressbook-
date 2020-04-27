#pragma once
#include<vector>
#include<string>
#include"Contact.h"

class Adressbook
{
public:
	static Adressbook& Instance() {
		static Adressbook adressbook_static;
		return adressbook_static;
	}
	void add(const Contact&);
	void sort(Contact::Field, Contact::Sort_Order);
	void print();
	vector <Contact> data;//вектор данных
private:
	Adressbook() {};
	Adressbook(const Adressbook& root) = delete;
	Adressbook* operator=(const Adressbook&) = delete;

};

