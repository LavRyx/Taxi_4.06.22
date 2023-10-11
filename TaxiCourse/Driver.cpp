#include "Driver.h"
#include <iostream>
using namespace std;

Driver::Driver() {}
Driver::Driver(string userName, string stazh, string numnumber, string carnum, string telephoneNum) {
	this->userName = userName;
	this->stazh = stazh;
	this->numnumber = numnumber;
	this->carnum = carnum;
	this->telephoneNum = telephoneNum;
}
string Driver::to_string() {
	return userName + "\n" + stazh + "\n" + numnumber + "\n" + carnum + "\n" + telephoneNum;
}
string Driver::getUserName() {
	return userName;
}
void Driver::setUserName(string userName) {
	this->userName = userName;
}
void Driver::setstazh(string stazh) {
	this->stazh = stazh;
}
void Driver::setnumnumber(string numnumber) {
	this->numnumber = numnumber;
}
void Driver::setcarnum(string carnum) {
	this->carnum = carnum;
}
void Driver::setTelephoneNum(string telephoneNum) {
	this->telephoneNum = telephoneNum;
}
void Driver::outData() {
	cout << "*____________" << endl;
	cout << "|ФИО водителя: " << userName << endl;
	cout << "|Стаж водителя: " << stazh << endl;
	cout << "|Номер машины водителя: " << numnumber << endl;
	cout << "|Автомобиль " << carnum << endl;
	cout << "|Телефон: " << telephoneNum << endl;
	cout << "*------------" << endl;
}
string Driver::getCar() {
	return carnum;
}