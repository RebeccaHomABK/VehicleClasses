#pragma once

class Vehicle
{
protected:
	int m_miles;

public:
	Vehicle();
	Vehicle(int miles);

	~Vehicle();

	virtual void Drive(int miles);
};