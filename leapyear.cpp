#include <iostream>
using namespace std;
int main() 
{
    cout << "Hello, World!"<<endl;
    cout << "Harshit Sisodiya"<<endl;
    cout << "SMIT"<<endl;
    int year=0;
    cout <<"Input the year"<<endl;
    cin>> year;
    if (year%400==0&&year%100==0) cout<<"Leap year";
    else cout<<"Not a leap year";
    return 0;
}