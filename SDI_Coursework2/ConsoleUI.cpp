#include <iostream>
#include <fstream>
#include <sstream>
#include "ConsoleUI.h"
#include "GlobalData.h"

using namespace std;

// read and write file function when start up and shut down

void ConsoleUI::readFromFile()
{
	ifstream projectFile;
	string tempProj;
	projectFile.open("data/dataProject.txt");

	// read data in project into project vector
	while (getline(projectFile, tempProj))
	{
		// HANDLE OBJECT CREATION AND STORE INTO VECTOR HERE
		// projects.push_back(temp);
	}

	projectFile.close();

	ifstream materialFile;
	string tempMat;
	materialFile.open("data/dataMaterial.txt");

	// read data in material into material vector
	while (getline(materialFile, tempMat))
	{
		// HANDLE OBJECT CREATION AND STORE INTO VECTOR HERE
		// materials.push_back(temp);
	}

	materialFile.close();
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
	system("cls");
	cout << "Project Creation Screen\n";
	cout << "------------------------\n";

	Project tempProject;

	cout << "Title: ";
	string tempTitle;
	getline(cin, tempTitle);
	tempProject.setTitle(tempTitle);

	cout << "\nSummary: ";
	string tempSummary;
	getline(cin, tempSummary);
	tempProject.setSummary(tempSummary);

	cout << "\nList of Genres:";
	cout << "\n1. Action";
	cout << "\n2. Horror";
	cout << "\n3. Love";
	cout << "\n4. Sport";
	cout << "\n5. Others";
	cout << "\nGenre: ";
	Genre tempGenre;
	int tempGenreInput;
	cin >> tempGenreInput;
	switch (tempGenreInput)
	{
	case 1:
		tempGenre = Genre::Action;
		break;
	case 2:
		tempGenre = Genre::Horror;
		break;
	case 3:
		tempGenre = Genre::Love;
		break;
	case 4:
		tempGenre = Genre::Sport;
		break;
	case 5: default:
		tempGenre = Genre::Others;
		break;
	}
	tempProject.setGenre(tempGenre);

	cout << "\nDate:";
	string tempDate;
	getline(cin, tempDate);
	tempProject.setDate(tempDate);

	cout << "\nFilming Location: ";
	string tempFilmingLocation;
	getline(cin, tempFilmingLocation);
	tempProject.setFilmingLocation(tempFilmingLocation);

	cout << "\nLanguage: ";
	string tempLanguage;
	getline(cin, tempLanguage);
	tempProject.setLanguage(tempLanguage);

	cout << "\nRuntime: ";
	unsigned tempRuntime;
	cin >> tempRuntime;
	tempProject.setRuntime(tempRuntime);

	cout << "\nHow many keywords do you wish to input?";
	int numOfKeywords;
	cin >> numOfKeywords;
	vector<string> tempKeywords;
	for (int i = 0; i < numOfKeywords; i++)
	{
		cout << "\nKeywords number " << i + 1 << ": ";
		string temp;
		getline(cin, temp);
		tempKeywords.push_back(temp);
	}
	tempProject.setKeywords(tempKeywords);

	cout << "\nList of Status:";
	cout << "\n1. Unreleased";
	cout << "\n2. Now_Playing";
	cout << "\n3. Released";
	cout << "\nStatus: ";
	Status tempStatus;
	int tempStatusInput;
	cin >> tempStatusInput;
	switch (tempStatusInput)
	{
	case 1:
		tempStatus = Status::Unreleased;
		break;
	case 2:
		tempStatus = Status::Now_Playing;
		break;
	case 3:
		tempStatus = Status::Released;
		break;
	default:
		tempStatus = Status::Released;
		cout << "\nStatus assumed to set as Released";
		break;
	}
	tempProject.setStatus(tempStatus);

	// Projects with status as Now_Playing can input weekly ticket sales
	if (tempProject.getStatus() == Status::Now_Playing)
	{
		cout << "\nWeekly Ticket Sales: ";
		unsigned tempWeeklyTicketSales;
		cin >> tempWeeklyTicketSales;
		tempProject.setWeeklyTicketSales(tempWeeklyTicketSales);
	}

	cout << "\nProducer Name: ";
	string tempProducer;
	getline(cin, tempProducer);
	tempProject.setProducer(tempProducer);

	cout << "\nDirector Name: ";
	string tempDirector;
	getline(cin, tempDirector);
	tempProject.setDirector(tempDirector);
	
	cout << "\nWriter Name: ";
	string tempWriter;
	getline(cin, tempWriter);
	tempProject.setWriter(tempWriter);

	cout << "\nHow many casts do you wish to input?";
	int numOfCasts;
	cin >> numOfCasts;
	vector<string> tempCasts;
	for (int i = 0; i < numOfCasts; i++)
	{
		cout << "\nCasts number " << i + 1 << ": ";
		string temp;
		getline(cin, temp);
		tempCasts.push_back(temp);
	}
	tempProject.setCast(tempCasts);

	cout << "\nEditor Name: ";
	string tempEditor;
	getline(cin, tempEditor);
	tempProject.setEditor(tempEditor);

	cout << "\nProduction Designer Name: ";
	string tempProductionDesigner;
	getline(cin, tempProductionDesigner);
	tempProject.setProductionDesigner(tempProductionDesigner);

	cout << "\nSet Decorator Name: ";
	string tempSetDecorator;
	getline(cin, tempSetDecorator);
	tempProject.setSetDecorator(tempSetDecorator);

	cout << "\nCostume Designer Name: ";
	string tempCostumeDesigner;
	getline(cin, tempCostumeDesigner);
	tempProject.setCostumeDesigner(tempCostumeDesigner);

	// AT THE END
	projects.push_back(tempProject);
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
