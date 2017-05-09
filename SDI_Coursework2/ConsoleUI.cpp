#include <iostream>
#include "ConsoleUI.h"

using namespace std;

// read and write file function when start up and shut down

void ConsoleUI::readFromFile()
{

}

void ConsoleUI::writeToFile()
{

}

// features show to user on general screen

void ConsoleUI::showMenu()
{
	bool runFlag = true;
	do {
		system("cls");
		cout << "Welcome to TrekStar Pictures\n";
		cout << "----------------------------\n";
		cout << "Please Select An Option: (Followed by Pressing 'Enter')\n";
		cout << "1) Search Project by Name\n";
		cout << "2) Search Project by Author\n";
		cout << "3) Enter Maintenance Mode\n";
		cout << "0) Quit Program and Save\n";

		int tempInput;
		cout << "Your Option: ";
		cin >> tempInput;

		switch (tempInput) {
		case 1:
			searchProject();
			break;
		case 2:
			searchByAuthor();
			break;
		case 3:
			maintenanceMode();
			break;
		case 0:
			cout << "You have decided to quit the program.\n";
			runFlag = false;
			break;
		default:
			break;
		}

	} while (runFlag);
}

void ConsoleUI::searchProject()
{
	bool runFlag = true;
	do {
		system("cls");

		cout << "Please enter title of Project: ";
		string tempInput;
		
		// continue the codes
	} while (runFlag);
}

void ConsoleUI::searchByAuthor()
{
	bool runFlag = true;
	do {
		system("cls");

		cout << "Please enter name of Author: ";
		string tempInput;

		// continue the codes
	} while (runFlag);
}

void ConsoleUI::maintenanceMode()
{
	bool runFlag = true;
	do {
		system("cls");
		cout << "MAINTENANCE MODE\n";
		cout << "-----------------\n";
		cout << "Please Select An Option: (Followed by Pressing 'Enter')\n";
		cout << "1) Create Project\n";
		cout << "2) Create Material\n";
		cout << "3) Update Project\n";
		cout << "4) Update Material\n";
		cout << "5) Remove Project\n";
		cout << "6) Remove Material\n";
		cout << "7) Produce Daily Report\n";
		cout << "0) Quit Program and Save\n";

		int tempInput;
		cout << "Your Option: ";
		cin >> tempInput;

		switch (tempInput) {
		case 1:
			createProject();
			break;
		case 2:
			createMaterial();
			break;
		case 3:
			updateProject();
			break;
		case 4:
			updateMaterial();
			break;
		case 5:
			removeProject();
			break;
		case 6:
			removeMaterial();
			break;
		case 7:
			produceDailyReport();
			break;
		case 0:
			runFlag = false;
			break;
		default:
			break;
		}

	} while (runFlag);
}

void ConsoleUI::createProject()
{

}

void ConsoleUI::createMaterial()
{

}

void ConsoleUI::updateProject()
{

}

void ConsoleUI::updateMaterial()
{

}

void ConsoleUI::removeProject()
{

}

void ConsoleUI::removeMaterial()
{

}

void ConsoleUI::produceDailyReport()
{

}
