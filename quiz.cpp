#include <iostream>
using namespace std;

int main() 
{
    int num;
    cout << "enter a number : ";
    cin >> num;
    int rev = 0;
    while(num > 0)
    {
        rev = num%10;
        cout << rev;
        num = num/10;

    }
    return 0;
}