#include <bits/stdc++.h>
using namespace std;

int  main()
{
    long long num1, num2;
    cin >> num1 >> num2;
    int last1, last2, sum;
    last1=num1%10;
    last2=num2%10;
    sum =last1 +last2;
    cout<< sum;
    return 0;
}
