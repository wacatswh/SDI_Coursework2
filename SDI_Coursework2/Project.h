#pragma once
#include <vector>

using namespace std;

class Project
{
public:
	Project();
	~Project();

private:
	// variables for project details
	string title;
	string summary;
	Genre genre;
	string date;
	vector<string> filmingLocations;
	string language;
	float runtime;
	vector<string> keywords;
	float weeklyTicketSales;

	// variables for crew
	string producer;
	string director;
	string writer;
	vector<string> cast;
	string editor;
	string productionDesigner;
	string setDecorator;
	string costumeDesigner;

};

enum class Genre
{
	Action, Fantasy, Horror, Love, Musical, Sport, Others
};