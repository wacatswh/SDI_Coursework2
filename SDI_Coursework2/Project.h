#pragma once
#include <vector>

using namespace std;

class Project
{
public:
	Project();
	~Project();

	// getter and setter for project details
	void setTitle(string title);
	string getTitle();
	void setSummary(string summary);
	string getSummary();
	void setGenre(Genre genre);
	Genre getGenre();
	void setDate(string date);
	string getDate();
	// setFilmingLocations
	// getFilmingLocations
	void setLanguage(string language);
	string getLanguage();
	void setRuntime(float runtime);
	float getRuntime();
	// setKeywords
	// getKeywords
	void setWeeklyTicketSales(float weeklyTicketSales);
	float getWeeklyTicketSales();

	// getter and setter for crew
	void setProducer(string producer);
	string getProducer();
	void setDirector(string director);
	string getDirector();
	void setWriter(string writer);
	string getWriter();
	// getCast()
	// setCast()
	void setEditor(string editor);
	string getEditor();
	void setProductionDesigner(string productionDesigner);
	string getProductionDesigner();
	void setSetDecorator(string setDecorator);
	string getSetDecorator();
	void setCostumeDesigner(string costumeDesigner);
	string getCostumeDesigner();

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