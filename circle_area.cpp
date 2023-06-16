#include<iostream>
#include<iomanip>

using namespace std;
int  main()
{
    double R;
    cin >> R;
    double pi=3.141592653;
    double Area = pi*R*R;
    cout << fixed << setprecision(9) << Area;
    return 0;

}
