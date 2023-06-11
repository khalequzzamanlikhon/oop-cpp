#include <bits/stdc++.h>
using namespace std;
class Animal
{
public:
    string color="grey";
    void sound()
    {
        cout<<"sound sound"<<endl;
    }

};
class Dog:public Animal
{
public:
    string color="black";
    void sound()
    {
        cout<<"ghew ghew"<<endl;
    }

};

int main()
{
    Dog d;
    Animal a;
    cout<<d.color<<endl;
    d.sound();
    a.sound();
    cout<<"animal color: "<<a.color<<endl;

    return 0;
}
