#include "Airplane.h"

//	Constructor
Airplane::Airplane()
	: Vehicle(0)
	, m_model("Unknown")
	, m_airline("Airlines")
{

}
Airplane::Airplane(int miles, std::string model, std::string airline)
	: Vehicle(miles)
	, m_model(model)
	, m_airline(airline)
{

}

//	Destructor
Airplane::~Airplane()
{

}

void Airplane::Drive(int miles)
{
	m_miles += miles;
	std::cout << "The " << m_airline << " " << m_model << " traveled " << m_miles << " miles." << std::endl;
}