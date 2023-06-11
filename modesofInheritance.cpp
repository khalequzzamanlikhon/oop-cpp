#include <bits/stdc++.h>
using namespace std;
class A
{
public:
    int x;
protected:
    int y;
private:
    int z;

};
class B:public A

{
public:

    void display_b()
    {
        cout<<"x is public, y is protected, z is not accessible\n";
        cout<<endl;
    }



};
class C: protected A
{
public:

    void display_c()
    {
        cout<<"x and y are protected and z is not accessible\n";
        cout<<endl;
    }


};
class D:private A
{
public:

    void display_d()
    {

        cout<<"x and y is private and z is not accessible\n";
        cout<<endl;
    }

};
int main()
{
    B ob1;
    C ob2;
    D ob3;
    ob1.display_b();
    ob2.display_c();
    ob3.display_d();
    cout<<"this a demonstration of modes of inheritance\n";
    return 0;
}
