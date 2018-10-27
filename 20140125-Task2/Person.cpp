#include "Person.h"
#include <iostream>

using namespace std;
Person::Person()
{
    name="N/A";
    //ctor
}


Person::Person(string the_name)
{
    this->name = the_name;
    //copy ctor
}

string Person::get_name() const{ //for constant Object
    return name;
}

Person::Person(const Person& other)
{
    this->name = other.name;
}

Person& Person::operator=(const Person& rhs)
{
    if (this == &rhs) return *this; // handle self assignment
    //assignment operator
    else
    {
        if(name != "") name = "";
        if(rhs.name != ""){
            this ->name = rhs.name;
        }
    }

    return *this;
}

istream& operator >>(istream& in_stream,Person& person_object)
{
    in_stream>>person_object.name;
    return in_stream;
}

ostream& operator <<(ostream& out_stream,const Person& person_object)
{
    out_stream<<"Owner name is "<<person_object.name<<" "<<endl;
    return out_stream;
}
