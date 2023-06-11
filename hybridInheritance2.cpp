#include <bits/stdc++.h>
using namespace std;
class A
{
protected:
    int a;
public:
    void set_A()
    {
        cout<<"enter value of a\n";
        cin>>a;
    }

};
class B:public A
{
protected:
    int b;
public:
    void set_B()
    {
        cout<<"enter value of B\n";
        cin>>b;
    }
};

class C
{
protected :
    int c;
public:
    void set_C()
    {
        cout<<"enter the value of c\n";
        cin>>c;
    }
};
class D:public B,public C
{
protected:
    int d;
public :
    void set_D()
    {
        cout<<"enter the value of d\n";
        cin>>d;
        set_A();
        set_B();
        set_C();
        cout<<"multiplication of four number is : \n"<<a*b*c*d<<endl;
    }

};

int main()
{
    D d;
    d.set_D();
    return 0;
}
