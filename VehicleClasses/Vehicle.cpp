#include "Vehicle.h"
#include <iostream>

//	Constructor
Vehicle::Vehicle()
	: m_miles(0)
{

}

Vehicle::Vehicle(int miles)
	: m_miles(miles)
{

}

//	Destructor
Vehicle::~Vehicle()
{

}

void Vehicle::Drive(int miles)
{
	m_miles += miles;
	std::cout << "This vehicle traveled " << m_miles << " miles." << std::endl;
}