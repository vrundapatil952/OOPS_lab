//write a c++ code to implement multi level inheritance using vehicle, car and sports car as clear use appropriate member functions and data function

#include<iostream>
using namespace std;

class vehicle
{
  int c;
public:
void display1(int c)
{
    cout<<"vehicle type:"<<c<<endl;
}
};
class car : public vehicle

{
    float milege;
public:
void display2(float a)
{
cout<<"car type:"<<a<<endl;
}
};

class sports_car : public car
{
float speed;
public:
void display3(float b)
{
    cout<<"car speed:"<<b<<endl;
}
};
int main()
{
    vehicle v;
    car c;
    sports_car sc;
    v.display1(3);
    c.display2(7);
    c.display1(66);
    sc.display3(4);
    sc.display2(55);
    sc.display1(48);
    return 0;
}
