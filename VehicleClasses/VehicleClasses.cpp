#include <iostream>
#include "Vehicle.h"
#include "Boat.h"
#include "Car.h"
#include "Airplane.h"

int main()
{
    //  Vehicle base class
    Vehicle myVehicle = Vehicle(30);
    myVehicle.Drive(50);
    std::cout << std::endl;

    //  Boat class derived from Vehicle class
    Boat myBoat = Boat(30, "sailboat");
    myBoat.Drive(90);
    std::cout << std::endl;

    //  Car class derived from Vehicle class
    Car myCar = Car(60, 2022, "Hyundai", "Ioniq");
    myCar.Drive(40);
    std::cout << std::endl;

    //  Airplane class derived from Vehicle class
    Airplane myPlane = Airplane(2000, "Boeing 777", "United Airlines");
    myPlane.Drive(100);
}