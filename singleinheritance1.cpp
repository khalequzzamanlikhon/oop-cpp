#include <bits/stdc++.h>
using namespace std;
class A
{
protected:
    int a;
public:
    void set_A()
    {
        cout<<"enter the value of a\n";
        cin>>a;
    }
    void dispaly_A()
    {
        cout<<endl<<"value of a is : \n"<<a;
    }
};
class B:public A
{
    int b,p;
public:
    void set_B()
    {
        set_A();
        cout<<"enter the value of b\n";
        cin>>b;
    }
    void display_B()
    {

        void    display_A();
        cout<<endl<<"value of b is : \n"<<b;


    }
    void cal_product()
    {
        p=a*b;
        cout<<endl<<"the product of a and b is :\n"<<p;

    }
};

int main()
{
    B obj_b;
    obj_b.set_B();
    obj_b.display_B();
    obj_b.cal_product();
    return 0;
}
