#pragma once
#include<string>
using namespace std;

class Contact
{
public:
	string fio, tel;
	int vozrast;
	Contact(string fioo, int voz, string tele) {
		fio = fioo;
		tel = tele;
		vozrast = voz;
	}

	enum Field {
		Fio=1, Vozrast, Tel
	};
	enum Sort_Order {
		increase=1, decrease
	};
	
};

