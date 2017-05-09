#include "Project.h"

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
