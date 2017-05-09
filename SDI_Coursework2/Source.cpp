#include <iostream>
#include "Materials.h"
#include "Project.h"
#include "ConsoleUI.h"

using namespace std;

int main()
{
	// load data from file into memory
	ConsoleUI::readFromFile();

	ConsoleUI::showMenu();

	// write data in memory into file 
	ConsoleUI::writeToFile();
}