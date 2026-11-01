#include <iostream>
using namespace std;

int main() 
{
    cout << "Hello, World!"<<endl; 
    int ans=0,n=0,a=0,b=0;
    cout<< "menu"<<endl;
    cout<< "1 for addition 2 for multiplication and 3 for subtraction"<<endl;
    cout<< "enter your choice"<<endl;
    cin>>n;
    cout<< "enter first variable"<<endl;
    cin>>a;
    cout<< "enter second variable"<<endl;
    cin>>b;
    
    

switch(n)
    {
    case 1:
    cout<< "addition"<<endl;
    ans=a+b;
    break;
    case 2:
    cout<< "multiplication"<<endl;
    ans=a*b;
    break;
    case 3:
    cout<< "subtraction"<<endl;
    ans=a-b;
    break;
    default:
    cout<< "menu padh"<<endl;
}
    cout<< "output is "<<ans<<endl;
    return 0;
}