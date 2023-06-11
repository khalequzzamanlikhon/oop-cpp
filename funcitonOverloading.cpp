#include <bits/stdc++.h>
using namespace std;
class Sum
{

public:
    void sum(int x,int y)
    {
        cout<<"sum is : "<<x+y<<endl;

    }
    void sum(int x, int y,int z)
    {
        cout<<"sum of three numbers is : "<<x+y+z<<endl;
    }

};
int main()
{
    Sum s;
    s.sum(2,3);
    s.sum(3,4,5);

    return 0;
}
