#include <bits/stdc++.h>
using namespace std;
class Vehicle
{
public:
    Vehicle()
    {
        cout<<"this is a vehicle\n";
    }
};
class Fourwheeler
{
public:
    Fourwheeler()
    {
        cout<<"this is four wheeler\n";

    }
};
class Car:public Vehicle, public Fourwheeler{



};
int main(){
Car obj;
return 0;}
