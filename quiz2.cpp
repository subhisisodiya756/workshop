#include <iostream>
using namespace std;

int main() 
{
    double n,x=0;
    double exp=1;
    cout << "enter a number : ";
    cin >> x;
    cout << "enter exponent : ";
    cin >> n;
    if (n>=0)
    {
    while(n>0)
    {
        exp = exp*x;
        n = n-1;
    }
    }
    else
    { 
    while (n<0)
    {
        exp = exp/x;
        n = n+1;
    }
    }
    cout << "result: " << exp;
    return 0;
}
