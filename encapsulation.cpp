#include <bits/stdc++.h>
using namespace std;
class Half
{
    int a;
    int b;
public:
    int solve(int x)
    {
        a=x;
        b=x/2;
        return b;
    }
};
int main()
{
    int n;
    cout<<"enter a number"<<endl;
    cin>>n;
    Half h;
    int ans=h.solve(n);
    cout<<ans<<endl;
    return 0;
}
