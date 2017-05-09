#include "Materials.h"

using namespace std;

Materials::Materials()
{

}

Materials::~Materials()
{

}

void Materials::setIdNumber(string _idNumber)
{
	idNumber = _idNumber;
}

string Materials::getIdNumber()
{
	return idNumber;
}

void Materials::setFilmTitle(string _filmTitle)
{
	filmTitle = _filmTitle;
}

string Materials::getFilmTitle()
{
	return filmTitle;
}

void Materials::setFormat(string _format)
{
	format = _format;
}

string Materials::getFormat()
{
	return format;
}

void Materials::setAudioFormat(AudioFormat _audioFormat)
{
	audioFormat = _audioFormat;
}

AudioFormat Materials::getAudioFormat()
{
	return audioFormat;
}

void Materials::setRuntime(float _runtime)
{
	runtime = _runtime;
}

float Materials::getRuntime()
{
	return runtime;
}

void Materials::setLanguage(string _language)
{
	language = _language;
}

string Materials::getLanguage()
{
	return language;
}

void Materials::setRetailPrice(float _retailPrice)
{
	retailPrice = _retailPrice;
}

float Materials::getRetailPrice()
{
	return retailPrice;
}

void Materials::setSubtitles(string _subtitles)
{
	subtitles = _subtitles;
}

string Materials::getSubtitles()
{
	return subtitles;
}

void Materials::setFrameAspect(float _frameAspect)
{
	frameAspect = _frameAspect;
}

float Materials::getFrameAspect()
{
	return frameAspect;
}
