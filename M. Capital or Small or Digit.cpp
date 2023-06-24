//Determine whether X is Digit or Alphabet .
#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch;
    cin>> ch;
    if((ch>=65 && ch<=90)|| (ch>=97 && ch<=122))
    {
        cout<< "ALPHA";
        cout <<endl;
        if (ch>=65 && ch<=90)
            cout<< "IS CAPITAL";
        else
            cout<< "IS SMALL";
    }
    if (ch>= 48 && ch<=57)
    {
        cout<< "IS DIGIT";
    }
    return 0;
}
