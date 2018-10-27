#include "Vehicle.h"
#include <iostream>

using namespace std;
Vehicle::Vehicle()
: ManufName("N/A"),numOfCylinders(0),owner()
{
    //ctor
}

Vehicle::Vehicle(const Vehicle& other)
{
    this->ManufName = other.ManufName;
    this->numOfCylinders = other.numOfCylinders;
    this->setOwner(other.getOwner());
    //copy ctor
}

Vehicle::Vehicle(string Manufname,int numfCylinders,Person p)
: ManufName(Manufname),numOfCylinders(numfCylinders),owner(p)
{
}

void Vehicle::setManufName(string maker)
{
    this->ManufName=maker;
}

void Vehicle::setNumOfCylinders(int Cylinders)
{
    this->numOfCylinders=Cylinders;
}

void Vehicle::setOwner(Person p)
{
    this->owner=p;
}

string Vehicle::getManufName() const
{
    return ManufName;
}

int Vehicle::getNumOfCylinders() const
{
    return numOfCylinders;
}

Person Vehicle::getOwner() const
{
    return owner;
}

Vehicle& Vehicle::operator=(const Vehicle& rhs)
{

    if (this == &rhs) return *this; // handle self assignment
    //assignment operator
    else{
        this->ManufName = rhs.ManufName;
        this->numOfCylinders = rhs.numOfCylinders;
        this->setOwner(rhs.getOwner());
    }
    return *this;
}

istream& operator >>(istream& in_stream,Vehicle& vehicle){
    in_stream>>vehicle.ManufName>>vehicle.numOfCylinders>>vehicle.owner;
    return in_stream;
}

ostream& operator <<(ostream& out_stream,const Vehicle& vehicle)
{
    out_stream<<"Manufacturer's name is "<<vehicle.ManufName<<", number of cylinders in the engine is "<<vehicle.numOfCylinders;
    out_stream<<", and "<<vehicle.owner<<endl;
    return out_stream;
}
