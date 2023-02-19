#include "person.hpp"

Person::Person() //default constructor
{
	Person::name = "default";
	dayOfBirth = 0;
	monthOfBirth = 0;
	yearOfBirth = 0;
	wsuId = 0;
}

Person::~Person() //destructor
{
	
}

Person::Person(std::string name, int day, int month, int year, int wsuid)
{
	Person::name = name;
	dayOfBirth = day;
	monthOfBirth = month;
	yearOfBirth = year; 
	wsuId = wsuid;
}

std::string Person::getName()
{
	return std::string();
}

int Person::getDayBirth()
{
	return 0;
}

int Person::getMonthYear()
{
	return 0;
}

int Person::getYearBirth()
{
	return 0;
}

int Person::getWsuId()
{
	return 0;
}

void Person::setName(std::string setName)
{
	name = setName;
}

void Person::setDayBirth(int dateBirth)
{
	 dayOfBirth = dateBirth;
}

void Person::setMonthBirth(int MonthBirth)
{
	monthOfBirth = MonthBirth;
}

void Person::setYearBirth(int setYear)
{
	yearOfBirth = setYear;
}

void Person::setWsuid(int setWsuid)
{
	wsuId = setWsuid;
}
