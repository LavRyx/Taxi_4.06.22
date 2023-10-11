#pragma once
#include <string>
using namespace std;
class Driver
{
private:
	string userName;
	string stazh;
	string numnumber;
	string carnum;
	string telephoneNum;
public:
	Driver();
	Driver(string, string, string, string, string);
	string getUserName();
	string getCar();
	string to_string();
	void setUserName(string);
	void setstazh(string);
	void setnumnumber(string);
	void setcarnum(string);
	void setTelephoneNum(string);
	void outData();
};
