#include <iostream>
using namespace std;

int main() 
{
    int x=10;
    int *ptr=&x;
    cout << "value of x is "<<x<<endl;
    *ptr=50;
    cout << "pointer of x is "<<ptr<<endl;
    cout << "adrerss of x is "<<&x<<endl;
    cout << "value through pointer "<<*ptr<<endl;
    return 0;
}