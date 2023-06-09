
#include <bits/stdc++.h>
using namespace std;
class Learning
{
public:
    int subCode;
    string subName;
    Learning()
    {
        cout<<"default constructor is called";
        subCode=111;
        subName="Bengali";
        cout<<"\ninitial values when object is instantiated: "
        <<subCode<<", "<<subName;

    }
    void printName()
    {
        cout<<"\nsubject is :"<<subName;
    }
    void printCode();


};

void Learning::printCode()
{
    cout<<"\nthe subject code is:"<<subCode;

}

int main()
{
    Learning ob1;
    ob1.subCode=101;
    ob1.subName="English";
    ob1.printCode();
    ob1.printName();
}
