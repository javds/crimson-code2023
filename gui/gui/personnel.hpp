#ifndef PERSONNEL_H
#define PERSONNEL_H

#include "person.hpp"
#include <list>

class personnelList
{

public:
	personnelList();

	~personnelList();

	void pushPerson(Person* source);

	Person* findStudentID(int studentId);

    void loadList(std::string filename);

	void writeList(std::ifstream* writeFile);

private:

    std::list<Person*> hacker_list;


};
#endif
