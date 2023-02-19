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

void personnelList::loadList(std::ifstream* file)
{

	if (!file->is_open()) 
	{
		std::cout << "file failed to open\n";
	}

	//data format is as follows name, day, month, year, id
	std::string name;
	std::string day;
	std::string month;
	std::string year;
	std::string id;
	while (!file->eof())
	{
		std::string wholeLine;
		
		std::getline(wholeLine, );
		Person* newPerson = new Person;

		std::string  newName;
		int newday;
		int newMonth;
		int newYear;
		int newId;




	}



	return;
}



