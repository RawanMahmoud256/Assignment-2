#ifndef TRUCK_H
#define TRUCK_H
#include "Vehicle.h"
#include <iostream>

using namespace std;
class Truck : public Vehicle
{
    public:
        Truck();
        Truck(const Truck& other);
        Truck(string manfName, int numOfCyl, Person p, double load, int tow);
        void setLoad (double load);
        void setTowing (int tow);
        double getLoad() const;
        int getTowing() const;
        Truck& operator=(const Truck& other);
        friend istream& operator >>(istream& in_stream,Truck& truck);
        friend ostream& operator <<(ostream& out_stream,const Truck& truck);
    protected:
    private:
        double loadCapacityInTons;
        int towingCapacityInPounds;
};

#endif // TRUCK_H
