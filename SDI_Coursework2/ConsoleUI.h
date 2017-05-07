#pragma once
class ConsoleUI
{
public:
	// functions run when system start up and shut down
	void readFromFile();
	void writeToFile();

	// features show to user on general screen 

	void searchProject(); // provide to view related materials
	void searchByAuthor();
	void maintenanceMode(); // show below features when called

	// below are features in maintenance mode 

	void createProject();
	void createMaterial();
	void updateProject();
	void updateMaterial();
	void removeProject();
	void removeMaterial();
	void productDailyReport(); // produce daily reports on projects with certain amount of box earning

private:

};