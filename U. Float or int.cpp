//Given a number N Determine whether N is float number or integer number.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    double  x ;
    cin >> x ;
    if(x == (int)x )
        cout << "int " << x;
    else
        cout << "float " << (int)x << " " << x-(int)x;

}
