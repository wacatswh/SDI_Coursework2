#include "Material.h"

using namespace std;

Material::Material()
{

}

Material::~Material()
{

}

void Material::setIdNumber(string _idNumber)
{
	idNumber = _idNumber;
}

string Material::getIdNumber()
{
	return idNumber;
}

void Material::setFilmTitle(string _filmTitle)
{
	filmTitle = _filmTitle;
}

string Material::getFilmTitle()
{
	return filmTitle;
}

void Material::setFormat(string _format)
{
	format = _format;
}

string Material::getFormat()
{
	return format;
}

void Material::setAudioFormat(AudioFormat _audioFormat)
{
	audioFormat = _audioFormat;
}

AudioFormat Material::getAudioFormat()
{
	return audioFormat;
}

void Material::setRuntime(float _runtime)
{
	runtime = _runtime;
}

float Material::getRuntime()
{
	return runtime;
}

void Material::setLanguage(string _language)
{
	language = _language;
}

string Material::getLanguage()
{
	return language;
}

void Material::setRetailPrice(float _retailPrice)
{
	retailPrice = _retailPrice;
}

float Material::getRetailPrice()
{
	return retailPrice;
}

void Material::setSubtitles(string _subtitles)
{
	subtitles = _subtitles;
}

string Material::getSubtitles()
{
	return subtitles;
}

void Material::setFrameAspect(float _frameAspect)
{
	frameAspect = _frameAspect;
}

float Material::getFrameAspect()
{
	return frameAspect;
}
