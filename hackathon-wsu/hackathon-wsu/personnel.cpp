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

Person* findStudentID(std::list<Person>& source, int studentID)
{

	for (std::list<Person>::iterator i = source.begin(); i != source.end(); ++i)
	{
		/*if (i.getstudentID() == studentID)
		{
			std::cout << " Student Found. " << studentID << ":" << std::endl;

			return
		}*/
	}

	std::cout << " No student records match the ID. " << findStudentID << std::endl;
}



