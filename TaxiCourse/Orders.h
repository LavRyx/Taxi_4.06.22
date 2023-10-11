#pragma once
#include <string>
#include "Driver.h"
#include "Cars.h"
using namespace std;

class Orders: public Car, public Driver {
	string cFIO;
	string time;
	string from;
	string to;
	string driver;
	string price;
	string avto;
public:
	Orders();
	Orders(string, string, string, string, string, string, string);
	string to_string();
	void outData();
	void setcFIO(string);
	void settime(string);
	void setfrom(string);
	void setto(string);
	void setdriver(string);
	void setavto(string);
	void setprice(string);
};