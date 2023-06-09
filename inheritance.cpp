#include <bits/stdc++.h>
using namespace std;
class Person{
int id;
char name[100];
public:
    void set_p()
    {
        cout<<"enter the id";
        cin>>id;
        fflush(stdin);
        cout<<"enter name"<<endl;
        cin.get(name,100);
    }
    void display_p()
    {
        cout<<endl<<id<<"\t"<<name<<"\t";
    }

};
class Student:private Person{
char course[50];
int fee;
public:
    void set_s()
    {
        set_p();
        cout<<"enter the course name"<<endl;
        fflush(stdin);
        cin.get(course,50);
        cout<<"enter the course fee"<<endl;
        cin>>fee;
    }
    void dislay_s()
    {
        display_p();
        cout<<course<<"\t"<<fee<<endl;
    }
};
int main()
{
    Student s;
    s.set_s();
    s.dislay_s();
    return 0;
}
