//Print his age in years, months and days.
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N, X, Y, Z ;
    cin >> N;
    X= N/365;
    Y= (N-(365*X)) / 30;
    Z= N-((365*X)+(Y*30));
    cout << X << " years" << endl;
    cout << Y << " months" << endl;
    cout << Z << " days" << endl;
}


