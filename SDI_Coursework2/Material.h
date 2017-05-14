#pragma once
#include "Project.h"

using namespace std;

enum class Package
{
	SingleSidedDVD, DoubleSidedDVD, ComboBox, VHS, BluRay
};

enum class AudioFormat
{
	Dolby, DolbyDigital, MPEG1, PCM, DTS
};

class Material : public Project
{
public:
	Material();
	~Material();

	// ******* NEEDS TOUCH UP ON CERTAIN VARIABLES IN RESPECT TO BUSINESS REQUIREMENT

	// getter and setter
	void setIdNumber(string _idNumber);
	string getIdNumber();
	void setFilmTitle(string _filmTitle);
	string getFilmTitle();
	void setFormat(string _format);
	string getFormat();
	void setAudioFormat(AudioFormat _audioFormat);
	AudioFormat getAudioFormat();
	void setRuntime(float _runtime);
	float getRuntime();
	void setLanguage(string _language);
	string getLanguage();
	void setRetailPrice(float _retailPrice);
	float getRetailPrice();
	void setSubtitles(string _subtitles);
	string getSubtitles();
	void setFrameAspect(float _frameAspect);
	float getFrameAspect();

private:
	string idNumber;
	string filmTitle;
	string format;
	AudioFormat audioFormat;
	float runtime;
	string language;
	float retailPrice;
	string subtitles;
	float frameAspect;
};

