//Determine whether they are brothers or not.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string F1, S1, F2, S2;
    cin >> F1 >> S1;
    cin>> F2 >> S2;
    if(S1 == S2)
    {
        cout<< "ARE Brothers";
    }
    else
    {
        cout<< "NOT";
    }
    return 0;
}
