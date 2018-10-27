#ifndef PERSON_H
#define PERSON_H
#include <iostream>

using namespace std;
class Person
{
    public:
        Person();
        Person(string the_name);
        string get_name() const;
        Person(const Person& other);
        Person& operator=(const Person& other);
        friend istream& operator >>(istream& in_stream,Person& person_object);
        friend ostream& operator <<(ostream& out_stream,const Person& person_object);
    protected:
    private:
        string name;
};

#endif // PERSON_H
