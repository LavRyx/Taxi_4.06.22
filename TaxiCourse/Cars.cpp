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
	cout << "|Марка авто: " << mark << endl;
	cout << "|Модель авто: " << model << endl;
	cout << "|Номер авто: " << num << endl;
	cout << "|Цвет авто: " << color << endl;
	cout << "|Год выпуска авто: " << year << endl;
	cout << "|Пробег авто: " << mileage << " км" << endl;
	cout << "|Мощность авто: " << hp << " лc" << endl;
	cout << "|Расход авто: " << consum << " л" << endl;
	cout << "*------------" << endl;
}