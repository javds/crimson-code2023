#pragma once
#include "bundler.hpp"



class Person
{
public:
	Person();

	~Person();

	Person(std::string name, int day, int month, int year, int wsuid);

	std::string getName();

	int getDayBirth();

	int getMonthYear();

	int getYearBirth();

	int getWsuId();

	void setName(std::string setName);

	void setDayBirth(int dateBirth);

	void setMonthBirth(int MonthBirth);

	void setYearBirth(int setYear);

	void setWsuid(int setWsuid);




private:

	std::string name;

	int dayOfBirth;
	int monthOfBirth;
	int yearOfBirth;
	int wsuId;

};

