#pragma once
#include"bundler.hpp"



class Person
{
public:
	Person();
	~Person();

	Person(std::string name, int day, int month, int year, int wsuid);

	


private:
	


	std::string name;

	int dayOfBirth;
	int monthOfBirth;
	int yearOfBirth;
	int wsuId;


};

