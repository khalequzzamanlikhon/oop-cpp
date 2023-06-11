#include <bits/stdc++.h>
using namespace std;
class A
{
public:
    int a;
};
class B:public A
{
public:
    int b;
};
class C:public A
{
public:
    int c;

};
class D: public B, public C
{
public:
    int d;
};
int main()
{
    D d;
    d.B::a=10;
    d.C::a=20;
    d.b=30;
    d.c=40;
    d.d=50;
    cout<<"value of a from class B: "<<d.B::a<<endl;
    cout<<"value of a from class C:"<< d.C::a<<endl;
    cout << "\n b : " << d.b;
    cout << "\n c : " << d.c;
    cout << "\n d : " << d.d << '\n';
}
