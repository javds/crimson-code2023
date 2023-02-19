#include "personnel.hpp"

personnelList::personnelList() //constructor code
{

}

personnelList::~personnelList() //destructor code
{

}

void personnelList::pushPerson(Person* source)
{
	list.push_back(source);
}

Person* personnelList::findStudentID(int studentID)
{
	for (auto it = list.begin(); it != list.end(); ++it)
	{
		if ((*it)->getWsuId() == studentID)
		{
			return (*it);
		}
	}

	//std::cout << " No student records match the ID. " << findStudentID << std::endl;
	return NULL;
}



