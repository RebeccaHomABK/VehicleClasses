#pragma once
#include "Vehicle.h"
#include <iostream>

class Car : public Vehicle
{
	int m_year;
	std::string m_brand;
	std::string m_model;

public:
	Car();
	Car(int miles, int year, std::string brand, std::string model);

	~Car();

	void Drive(int miles) override;
};