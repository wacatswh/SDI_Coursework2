#pragma once
#include "Project.h"

using namespace std;

class Materials : public Project
{
public:
	Materials();
	~Materials();

private:
	string identificationNumber;
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