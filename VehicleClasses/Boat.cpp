#include "Boat.h"

//	Constructor
Boat::Boat()
	: Vehicle(0)
	, m_type("Boat")
{

}

Boat::Boat(int miles, std::string type)
	: Vehicle(miles)
	, m_type(type)
{

}

//	Destructor
Boat::~Boat()
{

}

void Boat::Drive(int miles)
{
	m_miles += miles;
	std::cout << "The " << m_type << " traveled " << m_miles << " nautical miles." << std::endl;
}