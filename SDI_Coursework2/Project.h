#pragma once
#include <vector>

using namespace std;

enum class Genre
{
	Action, Fantasy, Horror, Love, Musical, Sport, Others
};

class Project
{
public:
	Project();
	~Project();

	// getter and setter for project details
	void setTitle(string _title);
	string getTitle();
	void setSummary(string _summary);
	string getSummary();
	void setGenre(Genre _genre);
	Genre getGenre();
	void setDate(string _date);
	string getDate();
	// setFilmingLocations
	// getFilmingLocations
	void setLanguage(string _language);
	string getLanguage();
	void setRuntime(unsigned _runtime);
	unsigned getRuntime();
	// setKeywords
	// getKeywords
	void setWeeklyTicketSales(unsigned _weeklyTicketSales);
	unsigned getWeeklyTicketSales();

	// getter and setter for crew
	void setProducer(string _producer);
	string getProducer();
	void setDirector(string _director);
	string getDirector();
	void setWriter(string _writer);
	string getWriter();
	// getCast()
	// setCast()
	void setEditor(string _editor);
	string getEditor();
	void setProductionDesigner(string _productionDesigner);
	string getProductionDesigner();
	void setSetDecorator(string _setDecorator);
	string getSetDecorator();
	void setCostumeDesigner(string _costumeDesigner);
	string getCostumeDesigner();

private:
	// variables for project details
	string title;
	string summary;
	Genre genre;
	string date;
	vector<string> filmingLocations;
	string language;
	unsigned runtime;
	vector<string> keywords;
	unsigned weeklyTicketSales;

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

