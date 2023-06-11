#include <bits/stdc++.h>
using namespace std;
class Animal
{
public:
    string color="grey";
    virtual void sound()
    {
        cout<<"animal sound"<<endl;

    }
    void print()
    {
        cout<<"the base class is called\n";

    }
};

class Dog: public Animal
{
public:
    string color="black";
    void sound()
    {
        cout<<"ghew ghew" <<endl;
    }
    void print()
    {
        cout<<"child class is called"<<endl;
    }
};

int main()
{
    Animal* a;
    Dog d;
    a=&d;
    a->Animal::sound();
    a->print();
    d.sound();

    return 0;
}
