#include "bundler.hpp"
#include "person.hpp"
#include "networking.hpp"
#include "personnel.hpp"

int main(void) 
{
	std::ifstream readFile("data.csv");
	std::fstream writeFile("data.csv");
	
	personnelList list;
	list.loadList(&readFile);
	
	
	list.writeList();
	readFile.close();
	writeFile.close();
	return 0;
}