
#include <bits/stdc++.h>
using namespace std;
class Vehicle
{
public:
    Vehicle()
    {
        cout<<"this from vehicle class\n";
    }
};
class Fourwheeler: public Vehicle
{
public:
    Fourwheeler()
    {
        cout<<"fourwheeler class inherit from vehicle\n";
    }
};

class Car:public Fourwheeler
{
public:
    Car()
    {
        cout<<"car class is inheritted from fouwheeler\n";
    }
};
int main()
{
    Car c;
    return 0;
}
