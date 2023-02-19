#pragma once
#include "bundler.hpp"

class personnelList
{
private:
	

public:
	personnelList(); 

	~personnelList(); 

	std::list<Person*> list;

	void pushPerson(Person* source);
	Person* findStudentID(std::list<Person>& source, int studentID)

};

