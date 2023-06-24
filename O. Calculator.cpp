//Print the result of the mathematical expression.
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int A, B;
    char S;
    cin >> A >> S >> B;
    switch(S)
    {
    case '+' :
        cout << A+B;
        break;
    case '-' :
        cout << A-B;
        break;
    case '*' :
        cout << A*B;
        break;
    case '/' :
        cout << A/B;
        break;
    }
}
