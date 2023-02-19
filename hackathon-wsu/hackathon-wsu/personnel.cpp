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
		
		std::getline(*file, wholeLine); 
		Person* newPerson = new Person;

		std::stringstream strn(wholeLine);
		
		std::getline(strn, name, ',');
		std::getline(strn, day, ',');
		std::getline(strn, month, ',');
		std::getline(strn, year, ',');
		std::getline(strn, id, '\n');

		newPerson->setName(name);
		newPerson->setDayBirth(stoi(day));
		newPerson->setMonthBirth(stoi(month));
		newPerson->setYearBirth(stoi(year));
		newPerson->setWsuid(stoi(id));
		newPerson->checkOut();

		list.push_back(newPerson);
	}
	return;
}

void personnelList::writeList(std::ifstream* writeFile)
{
	if (!writeFile->is_open())
	{
		std::cout << "writefile failed for some reason\n";
	}

	for (auto iter = list.begin(); iter != list.end(); ++iter)
	{
		std::string name = (*iter)->getName();
		int day = (*iter)->getDayBirth();
		int month = (*iter)->getMonth();
		int year = (*iter)->getYearBirth();
		int id = (*iter)->getWsuId();
		int checkedIn = (*iter)->getCheckInStatus();

		char comma = ',';
		

		*writeFile >> name;
		*writeFile >> comma;
		*writeFile >> day;
		*writeFile >> comma;
		*writeFile >> month;
		*writeFile >> comma;
		*writeFile >> year;
		*writeFile >> comma;
		*writeFile >> id;
		*writeFile >> comma;
		*writeFile >> checkedIn;

	}

	*writeFile >> 


}



