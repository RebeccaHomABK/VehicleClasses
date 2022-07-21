#include "Car.h"

//	Constructor
Car::Car()
	: Vehicle(0)
	, m_year(2022)
	, m_brand("Unspecified")
	, m_model("Car")
{

}

Car::Car(int miles, int year, std::string brand, std::string model)
	: Vehicle(miles)
	, m_year(year)
	, m_brand(brand)
	, m_model(model)
{

}

//	Destructor
Car::~Car()
{

}

//	Member functions
void Car::Drive(int miles)
{
	m_miles += miles;
	std::cout << "This " << m_year << " " << m_brand << " " << m_brand << " traveled " << m_miles << " miles." << std::endl;
}