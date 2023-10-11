#pragma once
#include <string>
using namespace std;
class Car {
	string mark;
	string model;
	string num;
	string color;
	string year;
	string mileage;
	string hp;
	string consum;
public:
	Car();
	Car(string, string, string, string, string, string, string, string);
	string getmark();
	void setmark(string mark);
	void setmodel(string model);
	void setnum(string num);
	void setcolor(string color);
	void setyear(string year);
	void setmileage(string mileage);
	void sethp(string hp);
	void setconsum(string consum);
	string to_string();
	void outData();
};