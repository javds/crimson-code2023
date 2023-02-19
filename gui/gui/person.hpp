#ifndef PERSON_H
#define PERSON_H

#include <string>

class Person
{
public:
	Person();

	~Person();

	Person(std::string name, int day, int month, int year, int wsuid);

	std::string getName();

	int getDayBirth();

	int getMonth();

	int getYearBirth();

	int getWsuId();

	bool getCheckInStatus();

	void setName(std::string setName);

	void setDayBirth(int dateBirth);

	void setMonthBirth(int MonthBirth);

	void setYearBirth(int setYear);

	void setWsuid(int setWsuid);

	void checkin();

	void checkOut();


private:

	std::string name;

	int dayOfBirth;
	int monthOfBirth;
	int yearOfBirth;
	int wsuId;
	bool checkedIn;

};

#endif
