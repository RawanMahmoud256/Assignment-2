// Course:  CS213 - Programming II  - 2018
// Title:   Assignment II - Task 2 - Problem 5
// Program: 20140125-Task2
// Purpose: This program implements a base class Vehicle, a Truck
//  class that is derived from Vehicle, and a Person class.
//  The main function is a driver that tests the Truck and
//  Person classes.
// Author:  Rawan Mahmoud
// Date:   21 October 2018
// Version: 2.0

#include <iostream>
#include "Person.h"
#include "Vehicle.h"
#include "Truck.h"

using namespace std;

int main()
{
    string owner;
    string manufactName;
    int numOfCylinders;
    double loadInTons;
    int towingCapacity;
    Truck t1; //?????????????
//    Person owner1;
    cout << "We'll create 4 trucks in different ways..." << endl;
    for(int i=0 ; i<2 ; i++){
        cout<<"Truck "<<i+1<<endl;
        cout<<"Enter the name of the owner: ";
        cin>>owner;
        cout<<endl<<"Enter the number of cylinders: ";
        cin>>numOfCylinders;
        cout<<endl<<"Enter the name of the manufacturer: ";
        cin>>manufactName;
        cout << "Enter the load capacity: ";
        cin>>loadInTons;
        cout<<endl<<"Enter the towing capacity: ";
        cin>>towingCapacity;
        Person _owner(owner);
        t1.setLoad(loadInTons);
        t1.setManufName(manufactName);
        t1.setNumOfCylinders(numOfCylinders);
        t1.setTowing(towingCapacity);
        t1.setOwner(_owner);
        cout<<"truck "<<i+1<<endl;
        cout<<t1<<endl;
    }


    cout << endl;
    cout << "Enter data for Truck 3 ... " << endl;
    Truck t2;
    cin>>t2;
    cout<<endl;
    cout << "Using the constructor with 5 arguments to "<<endl;
    Person owner3(owner);
    Truck t3(manufactName, numOfCylinders, owner3, loadInTons, towingCapacity);

    cout << "Using the copy constructor to create Truck 4 as a copy "
         << "of Truck 3..." << endl;
    Truck t4(t3);



    cout << "\nTruck 3 ..." << endl;
    cout <<  t3.getOwner() << endl;
    cout << "Manufacturer: " << t3.getManufName() << endl;
    cout << "Number of Cylinders: " << t3.getNumOfCylinders() << endl;
    cout << "Load Capacity: " << t3.getLoad() << endl;
    cout << "Towing Capacity: " << t3.getTowing() << endl;
    cout << endl;

    cout << "Truck 4..." << endl;
    cout<<t4<<endl;
//    cout << "Truck 4..." << endl;
//    cout << "Owner: " << truck4.getOwner() << endl;
//    cout << "Manufacturer: " << truck4.getManufName() << endl;
//    cout << "Number of Cylinders: " << truck4.getNumOfCylinders() << endl;
//    cout << "Load Capacity: " << truck4.getLoad() << endl;
//    cout << "Towing Capacity: " << truck4.getTowing() << endl;
//    cout << endl;

    cout << "Enter a new owner name for Truck 4: ";
    Person owner4;
    cin >> owner4;
    t4.setOwner(owner4);

    cout << "Enter a new towing capacity for Truck 4: ";
    cin >> towingCapacity;
    t4.setTowing(towingCapacity);

    cout << "Enter a new manufacturer for Truck 3: ";
    cin >> manufactName;
    t3.setManufName(manufactName);
    cout << endl << endl;

    cout << "Truck 3 after the changes..." << endl;
    cout<<t3<< endl;

    cout << "Truck 4 after the changes..." << endl;
    cout<<t4<< endl;

    cout << "Testing the assignment operators..." << endl;
    cout << "Testing truck2 = truck3" << endl<< endl;

    t1 = t3;

    cout << "Press any letter to see the results...";
    cin >> owner;
    cout<< endl;

    cout << "Truck 2 " << endl;
    cout<<t1<< endl;

    cout << "Truck 3" << endl;
    cout<<t3<< endl;

    cout << "Making some changes: " << endl;
    cout << "Enter a load capacity for truck 2: ";
    cin >> loadInTons;
    t1.setLoad(loadInTons);
    cout << "Setting the owner of truck 2 to Bo->" << endl;
    t1.setOwner(Person ("Bo"));
    cout << "Changing owner of truck 3 to the owner of truck 4: " << endl;
    owner3 = owner4;
    t3.setOwner(owner3);
    cout << "Enter a new number of cylinders for truck 3: ";
    cin >> numOfCylinders;
    t3.setNumOfCylinders(numOfCylinders);
    cout << endl;

    cout << "After the changes: " << endl;

    cout << "Truck 2 " << endl;
    cout<<t1<< endl;

    cout << "Truck 3" << endl;
    cout<<t3<< endl << "The end." << endl;

    return 0;
}



