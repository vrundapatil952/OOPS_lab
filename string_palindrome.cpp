#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char a[100]="civic";
    char s[100];
    strcpy(a,s);
    strrev(a);
    if(strcmp(a, s)==0)
    {
        cout<<"palindrome";
    }
}
