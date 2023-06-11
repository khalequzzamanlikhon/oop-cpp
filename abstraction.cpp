#include <bits/stdc++.h>
using namespace std;
class implementAbstraction
{
private:
    int a,b;
public:
    void setVal(int x,int y)
    {
        a=x;
        b=y;
    }
    void display()
    {
        cout<<"a= "<<a<<" b= "<<b;
    }
};
int main()
{
    implementAbstraction ia;
    ia.setVal(10,20);
    ia.display();
    return 0;
}
