#pragma once
#include "Project.h"

using namespace std;

class Materials : public Project
{
public:
	Materials();
	~Materials();

	// ******* NEEDS TOUCH UP ON CERTAIN VARIABLES IN RESPECT TO BUSINESS REQUIREMENT

	// getter and setter
	void setIdNumber(string IdNumber);
	string getIdNumber();
	void setFilmTitle(string filmTitle);
	string getFilmTitle();
	void setFormat(string format);
	string getFormat();
	void setAudioFormat(AudioFormat audioFormat);
	AudioFormat getAudioFormat();
	void setRuntime(float runtime);
	float getRuntime();
	void setLanguage(string language);
	string getLanguage();
	void setRetailPrice(float retailPrice);
	float getRetailPrice();
	void setSubtitles(string subtitles);
	string getSubtitles();
	void setFrameAspect(float frameAspect);
	float getFrameAspect();

private:
	string IdNumber;
	string filmTitle;
	string format;
	AudioFormat audioFormat;
	float runtime;
	string language;
	float retailPrice;
	string subtitles;
	float frameAspect;
};

enum class Package
{
	SingleSidedDVD, DoubleSidedDVD, ComboBox, VHS, BluRay
};

enum class AudioFormat
{
	Dolby, DolbyDigital, MPEG1, PCM, DTS
};