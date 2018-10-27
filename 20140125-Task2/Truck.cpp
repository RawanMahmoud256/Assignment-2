#include "Truck.h"
#include <iostream>
//#include "Vehicle.h"

using namespace std;
Truck::Truck()
:loadCapacityInTons(0.0), towingCapacityInPounds(0),Vehicle()
{
    //ctor
}

Truck::Truck(string manfName, int numOfCyl, Person p, double load, int tow)
:loadCapacityInTons(load),towingCapacityInPounds(tow),Vehicle(manfName,numOfCyl,p)
{
}
Truck::Truck(const Truck& other)
{
    this->loadCapacityInTons = other.loadCapacityInTons;
    this->towingCapacityInPounds = other.towingCapacityInPounds;
    this->setOwner(other.getOwner());
    this->ManufName=other.ManufName;
    this->numOfCylinders=other.numOfCylinders;
    //copy ctor
}

void Truck::setLoad (double load)
{
    this->loadCapacityInTons=load;
}

void Truck::setTowing (int tow)
{
    this->towingCapacityInPounds = tow;
}

double Truck::getLoad() const
{
    return loadCapacityInTons;
}

int Truck::getTowing() const
{
    return towingCapacityInPounds;
}

Truck& Truck::operator=(const Truck& rhs)
{
    if (this == &rhs) return *this; // handle self assignment
    //assignment operator
    else{
        this->loadCapacityInTons = rhs.loadCapacityInTons;
        this->towingCapacityInPounds = rhs.towingCapacityInPounds;
        (*this).Vehicle::operator=(rhs);
    }
    return *this;
}
istream& operator >>(istream& in_stream,Truck& truck)
{

     cout<<"Enter the name of the owner: ";
    in_stream>>truck.owner;
    cout<<endl<<"Enter the number of cylinders: ";
    in_stream>>truck.numOfCylinders;
    cout<<endl<<"Enter the name of the manufacturer: ";
    in_stream>>truck.ManufName;
    cout << "Enter the load capacity: ";
    in_stream>>truck.loadCapacityInTons;
    cout<<endl<<"Enter the towing capacity: ";
    in_stream>>truck.towingCapacityInPounds;
    return in_stream;
}
ostream& operator <<(ostream& out_stream,const Truck& truck)
{
    Vehicle v = truck;
    //(*this).Vehicle::operator<<(out_stream,truck);
    out_stream<<v;
    out_stream<<"the load capacity of the truck in tons are "<<truck.loadCapacityInTons<<", and towing capacity in pounds are  "<< truck.towingCapacityInPounds<<endl;
    return out_stream;
}
