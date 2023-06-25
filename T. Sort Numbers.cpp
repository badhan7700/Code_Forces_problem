//Given three numbers A, B, C. Print these numbers in ascending order.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int  X, Y, Z ;
    cin >> X >> Y >> Z;

    int p = max(max (X,Y),Z);
    int q = min(min (X,Y),Z);
    int r = ((X+Y+Z)-(p+q));

    cout << q << endl << r << endl << p << endl << endl;
    cout << X << endl << Y << endl << Z << endl;
}



