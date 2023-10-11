#include "Orders.h"
#include <iostream>
using namespace std;

Orders::Orders() {}
Orders::Orders(string cFIO, string time, string from, string to, string driver, string price, string avto) {
	this->cFIO = cFIO;
	this->time = time;
	this->from = from;
	this->to = to;
	this->driver = driver;
	this->price = price;
	this->avto = avto;
}

void Orders::outData() {
	cout << "*____________" << endl;
	cout << "|��� �������: " << cFIO << endl;
	cout << "|����� ������: " << time << endl;
	cout << "|����� ��������: " << from << endl;
	cout << "|����� ���������� " << to << endl;
	cout << "|��������: " << driver << endl;
	cout << "|����: " << price << endl;
	cout << "|����������: " << avto << endl;
	cout << "*------------" << endl;
}

string Orders::to_string() {
	return cFIO + "\n" + time + "\n" + from + "\n" + to + "\n" + driver + "\n" + price + "\n" + avto;
}

void Orders::setcFIO(string cFIO) {
	this->cFIO = cFIO;
}
void Orders::settime(string time) {
	this->time = time;
}
void Orders::setfrom(string from) {
	this->from = from;
}
void Orders::setto(string to) {
	this->to = to;
}
void Orders::setdriver(string driver) {
	this->driver = driver;
}
void Orders::setprice(string price) {
	this->price = price;
}
void Orders::setavto(string avto) {
	this->avto = avto;
}
