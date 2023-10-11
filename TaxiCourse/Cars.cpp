#include "Cars.h"
#include <iostream>
using namespace std;

Car::Car() { }
Car::Car(string mark, string model, string num, string color, string year, string mileage, string hp, string consum) {
	this->mark = mark;
	this->model = model;
	this->num = num;
	this->color = color;
	this->year = year;
	this->mileage = mileage;
	this->hp = hp;
	this->consum = consum;
}
string Car::to_string() {
	return mark + "\n" + model + "\n" + num + "\n" + color + "\n" + mileage + "\n" + year + "\n" + hp + "\n" + consum + "\n";
}
string Car::getmark() {
	return mark;
}
void Car::setmark(string mark) {
	this->mark = mark;
}
void Car::setmodel(string model) {
	this->model = model;
}
void Car::setnum(string num) {
	this->num = num;
}
void Car::setcolor(string color) {
	this->color = color;
}
void Car::setyear(string year) {
	this->year = year;
}
void Car::setmileage(string mileage) {
	this->mileage = mileage;
}
void Car::sethp(string hp) {
	this->hp = hp;
}
void Car::setconsum(string consum) {
	this->consum = consum;
}
void Car::outData() {
	cout << "*____________" << endl;
	cout << "|����� ����: " << mark << endl;
	cout << "|������ ����: " << model << endl;
	cout << "|����� ����: " << num << endl;
	cout << "|���� ����: " << color << endl;
	cout << "|��� ������� ����: " << year << endl;
	cout << "|������ ����: " << mileage << " ��" << endl;
	cout << "|�������� ����: " << hp << " �c" << endl;
	cout << "|������ ����: " << consum << " �" << endl;
	cout << "*------------" << endl;
}