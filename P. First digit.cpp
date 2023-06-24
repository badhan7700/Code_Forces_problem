//Print "EVEN" if the first digit of X is even num Otherwise "ODD".
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int X;
    cin >> X;
    if((X/1000)%2==0)
        cout<< "EVEN";
    else
        cout<< "ODD";
}


