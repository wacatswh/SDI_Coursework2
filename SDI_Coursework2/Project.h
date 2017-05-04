#pragma once
#include "Materials.h"
#include "TicketBox.h"

class Project
{
public:
	Project();
	~Project();


private:
	Materials mat;
	TicketBox ticketBox;
};