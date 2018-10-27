#ifndef VEHICLE_H
#define VEHICLE_H
#include <iostream>
#include "Person.h"
using namespace std;


class Vehicle
{
    public:
        Vehicle();
        Vehicle(const Vehicle& other);
        Vehicle(string Manufname,int numfCylinders,Person p);
        Vehicle& operator=(const Vehicle& other);
        string getManufName() const;
        int getNumOfCylinders() const;
        Person getOwner() const;
        void setManufName (string maker);
        void setNumOfCylinders(int Cylinders);
        void setOwner (Person p);
        friend istream& operator >>(istream& in_stream,Vehicle& vehicle);
        friend ostream& operator <<(ostream& out_stream,const Vehicle& vehicle);
    protected:
        string ManufName;
        int numOfCylinders;
        Person owner;
    private:
};

#endif // VEHICLE_H
