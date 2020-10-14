#include <iostream>
using namespace std;
double power(double a, int b=2)
{
    int i;
    for (i = 1; i < b; i++)
    {
        a  *= a;
    }
    return a;
}
main()
{
    double output;
    int n, p;
    cout << "enter the value of n";
    cin >> n;
    output = power(n, 2);
    cout << output;
    return 0;
}