#include<iostream>
void swap_no(int *a, int *b);
using namespace std;
int main()
{
    int a,b;
    cout<<"enter a b\n";
    cin>>a;
    cin>>b;
    swap_no(&a,&b);

}
void swap_no(int *a, int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
    cout<<"a: " << *a << endl;
    cout<< "b: " << *b;
}
