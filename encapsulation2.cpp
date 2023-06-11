#include <bits/stdc++.h>
using namespace std;
class Person
{
private:
    int age;
    string name;
public:
    Person(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
    void setName(string name)
    {
        this->name = name;
    }
    string getName()
    {
        return name;
    }
    void setAge(int age)
    {
        this->age=age;
    }
    int getAge()
    {
        return age;
    }
};
int main()
{
    Person person("likhon",28);
    cout<<"name: "<<person.getName()<<" Age : "<<person.getAge()<<endl;
    person.setAge(30);
    person.setName("limon");
    cout<<"name: "<<person.getName()<<" Age : "<<person.getAge()<<endl;
    return 0;
}
