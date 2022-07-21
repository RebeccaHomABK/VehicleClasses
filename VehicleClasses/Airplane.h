#pragma once

#include "Vehicle.h"
#include <iostream>

class Airplane : public Vehicle
{
	std::string m_model;
	std::string m_airline;

public:
	Airplane();
	Airplane(int miles, std::string model, std::string airline);

	~Airplane();

	void Drive(int miles) override;
};