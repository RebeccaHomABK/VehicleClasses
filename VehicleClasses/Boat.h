#pragma once

#include "Vehicle.h"
#include <iostream>

class Boat : public Vehicle
{
	std::string m_type;

public:
	Boat();
	Boat(int miles, std::string type);

	~Boat();

	void Drive(int miles) override;
};