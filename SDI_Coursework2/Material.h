#pragma once
#include "Project.h"

using namespace std;

enum class Package
{
	SingleSided_DVD, DoubleSided_DVD, ComboBox, VHS, BluRay, Others
};

enum class AudioFormat
{
	Dolby, Dolby_Digital, MPEG_1, PCM, DTS, Others
};

class Material
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
	void setPackage(Package _package);
	Package getPackage();

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
	Package package;
};

