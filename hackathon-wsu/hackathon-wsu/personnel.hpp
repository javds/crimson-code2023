#pragma once
#include "bundler.hpp"
#include "person.hpp"

class personnelList
{

public:
	personnelList();

	~personnelList();

	void pushPerson(Person* source);

	Person* findStudentID(int studentId);

private:

	std::list<Person*> list;


};

