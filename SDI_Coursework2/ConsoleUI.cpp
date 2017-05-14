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
		getline(cin, tempInput);

		// continue the codes for searching by project title
	} while (runFlag);
}

void ConsoleUI::searchByAuthor()
{
	bool runFlag = true;
	do {
		system("cls");

		cout << "Please enter name of Author: ";
		string tempInput;
		getline(cin, tempInput);

		// continue the codes for search by author name
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
		cout << "2) Update Project\n";
		cout << "3) Update Material\n";
		cout << "4) Remove Project\n";
		cout << "5) Remove Material\n";
		cout << "6) Produce Daily Report\n";
		cout << "0) Quit Program and Save\n";

		int tempInput;
		cout << "Your Option: ";
		cin >> tempInput;

		switch (tempInput) {
		case 1:
			createProject();
			break;
		case 2:
			updateProject();
			break;
		case 3:
			updateMaterial();
			break;
		case 4:
			removeProject();
			break;
		case 5:
			removeMaterial();
			break;
		case 6:
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

	// Projects with status Released can input material
	if (tempProject.getStatus() == Status::Released)
		createMaterial(tempProject);

	// AT THE END
	projects.push_back(tempProject);
}

void ConsoleUI::createMaterial(Project &tempProject)
{
	system("cls");
	cout << "Material Creation Screen\n";
	cout << "------------------------\n";

	cout << "ID Number: ";
	string tempID;
	getline(cin, tempID);
	tempProject.material->setIdNumber(tempID);

	tempProject.material->setFilmTitle(tempProject.getTitle());
	cout << "\nFilm Title: " << tempProject.material->getFilmTitle();

	cout << "\nFormat: ";
	string tempFormat;
	getline(cin, tempFormat);
	tempProject.material->setFormat(tempFormat);

	cout << "\nList of Audio Format: ";
	cout << "\n1. Dolby";
	cout << "\n2. Dolby_Digital";
	cout << "\n3. MPEG_1";
	cout << "\n4. PCM";
	cout << "\n5. DTS";
	cout << "\n6. Others";
	AudioFormat tempAudioFormat;
	int tempAudioFormatInput;
	cin >> tempAudioFormatInput;
	switch (tempAudioFormatInput)
	{
	case 1:
		tempAudioFormat = AudioFormat::Dolby;
		break;
	case 2:
		tempAudioFormat = AudioFormat::Dolby_Digital;
		break;
	case 3:
		tempAudioFormat = AudioFormat::MPEG_1;
		break;
	case 4:
		tempAudioFormat = AudioFormat::PCM;
		break;
	case 5: 
		tempAudioFormat = AudioFormat::DTS;
		break;
	case 6:
		tempAudioFormat = AudioFormat::Others;
		break;
	default:
		tempAudioFormat = AudioFormat::Others;
		cout << "\nAudioFormat assumed as Others";
		break;
	}
	tempProject.material->setAudioFormat(tempAudioFormat);

	tempProject.material->setRuntime(tempProject.getRuntime());
	cout << "\nRuntime: " << tempProject.material->getRuntime();

	tempProject.material->setLanguage(tempProject.getLanguage());
	cout << "\nLanguage: " << tempProject.material->getLanguage();

	cout << "\nRetail Price: ";
	float tempRetailPrice;
	cin >> tempRetailPrice;
	tempProject.material->setRetailPrice(tempRetailPrice);

	cout << "\nSubtitle: ";
	string tempSubtitle;
	getline(cin, tempSubtitle);
	tempProject.material->setSubtitles(tempSubtitle);

	cout << "\nFrame Aspect: ";
	float tempFrameAspect;
	cin >> tempFrameAspect;
	tempProject.material->setFrameAspect(tempFrameAspect);

	cout << "\nList of Packaging: ";
	cout << "\n1. SingleSided_DVD";
	cout << "\n2. DoubleSided_DVD";
	cout << "\n3. ComboBox";
	cout << "\n4. VHS";
	cout << "\n5. BluRay";
	cout << "\n6. Others";
	Package tempPackage;
	int tempPackageInput;
	cin >> tempPackageInput;
	switch (tempPackageInput)
	{
	case 1:
		tempPackage = Package::SingleSided_DVD;
		break;
	case 2:
		tempPackage = Package::DoubleSided_DVD;
		break;
	case 3:
		tempPackage = Package::ComboBox;
		break;
	case 4:
		tempPackage = Package::VHS;
		break;
	case 5:
		tempPackage = Package::BluRay;
		break;
	case 6:
		tempPackage = Package::Others;
		break;
	default:
		tempPackage = Package::Others;
		cout << "\nPackage assumed as Others";
		break;
	}
	tempProject.material->setPackage(tempPackage);
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
