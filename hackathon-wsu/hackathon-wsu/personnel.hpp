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

	void loadList(std::ifstream* file);

	void writeList(std::ifstream* writeFile);

private:

	std::list<Person*> list;


};

