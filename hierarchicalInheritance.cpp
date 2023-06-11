#include <bits/stdc++.h>
using namespace std;
class Vehicle
{
public:
    Vehicle()
    {
        cout<<"this is a vehicle class \n";
    }
};

class Car:public Vehicle
{
public:
    Car()
    {
        cout<<"this is car class inherit from vehicle calss\n";
    }
};
class Bus:public Vehicle
{
public:
    Bus()
    {
        cout<<"this bus class is inherit from vehicle also\n";
    }
};

int main()
{
    Car c;
    Bus b;
    return 0;
}
