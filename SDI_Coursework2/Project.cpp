#include "Project.h"
#include <iostream>
#include <sstream>

using namespace std;

Project::Project()
{

}

Project::~Project()
{

}

void Project::setTitle(string _title)
{
	title = _title;
}

string Project::getTitle()
{
	return title;
}

void Project::setSummary(string _summary)
{
	summary = _summary;
}

string Project::getSummary()
{
	return summary;
}

void Project::setGenre(Genre _genre)
{
	genre = _genre;
}

Genre Project::getGenre()
{
	return genre;
}

void Project::setDate(string _date)
{
	date = _date;
}

string Project::getDate()
{
	return date;
}

void Project::setFilmingLocation(string _filmingLocation)
{
	filmingLocation = _filmingLocation;
}

string Project::getFilmingLocation()
{
	return filmingLocation;
}

void Project::setLanguage(string _language)
{
	language = _language;
}

string Project::getLanguage()
{
	return language;
}

void Project::setRuntime(unsigned _runtime)
{
	runtime = _runtime;
}

unsigned Project::getRuntime()
{
	return runtime;
}

void Project::setKeywords(vector<string> &tempKeywords)
{
	keywords = tempKeywords;
}

string Project::getKeywords()
{
	string keywordString;

	// convert vector into single string
	for (int i = 0; i < keywords.size(); i++)
	{
		if (i == 0)
			keywordString = keywords[i];

		else
			keywordString + ", " + keywords[i];
	}

	return keywordString;
}

void Project::setStatus(Status _status)
{
	status = _status;
}

Status Project::getStatus()
{
	return status;
}

void Project::setWeeklyTicketSales(unsigned _weeklyTicketSales)
{
	weeklyTicketSales = _weeklyTicketSales;
}

unsigned Project::getWeeklyTicketSales()
{
	return weeklyTicketSales;
}

void Project::setProducer(string _producer)
{
	producer = _producer;
}

string Project::getProducer()
{
	return producer;
}

void Project::setDirector(string _director)
{
	director = _director;
}

string Project::getDirector()
{
	return director;
}

void Project::setWriter(string _writer)
{
	writer = _writer;
}

string Project::getWriter()
{
	return writer;
}

void Project::setCast(vector<string> &tempCast)
{
	cast = tempCast;
}

string Project::getCast()
{
	string castString;

	// convert vector into single string
	for (int i = 0; i < cast.size(); i++)
	{
		if (i == 0)
			castString = keywords[i];

		else
			castString + ", " + keywords[i];
	}

	return castString;
}

void Project::setEditor(string _editor)
{
	editor = _editor;
}

string Project::getEditor()
{
	return editor;
}

void Project::setProductionDesigner(string _productionDesigner)
{
	productionDesigner = _productionDesigner;
}

string Project::getProductionDesigner()
{
	return productionDesigner;
}

void Project::setSetDecorator(string _setDecorator)
{
	setDecorator = _setDecorator;
}

string Project::getSetDecorator()
{
	return setDecorator;
}

void Project::setCostumeDesigner(string _costumeDesigner)
{
	costumeDesigner = _costumeDesigner;
}

string Project::getCostumeDesigner()
{
	return costumeDesigner;
}
