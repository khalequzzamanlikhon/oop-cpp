#include <bits/stdc++.h>
using namespace std;
class Vehicle
{
public:
    Vehicle(){
    cout<<"this is a vehicle class\n";
    }
};

class Car:public Vehicle
{

};
int main(){

Car obj;
return 0;}
