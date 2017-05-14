#pragma once
class ConsoleUI
{
public:
	// functions run when system start up and shut down
	static void readFromFile();
	static void writeToFile();

	// features show to user on general screen 
	static void showMenu(); // the main menu UI

	static void searchProject(); // provide to view related materials
	static void searchByAuthor(); // search by name of author
	static void maintenanceMode(); // show below features when called

	// below are features in maintenance mode 
	static void createProject();
	static void createMaterial(Project &tempProject);
	static void updateProject();
	static void updateMaterial();
	static void removeProject();
	static void removeMaterial();
	static void produceDailyReport(); // produce daily reports on projects with certain amount of box earning

private:

};