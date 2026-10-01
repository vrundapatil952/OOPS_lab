#include<iostream>
using namespace std;
class student
{
public:
    string name;
    int age;
public:
    void setdata()
    {
        cin>>name;
        cin>>age;
    }
    void display()
    {
        cout<<"name="<<name<<endl;
        cout<<"age="<<age;
    }
};
int main()
{
    student s1, s2;
    s1.name="kavana";
    cout<<s1.name;
    return 0;
}

