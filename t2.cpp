#include <iostream>
using namespace std;

int main() 
{
    cout << "Hello, World!"<<endl; 
    int n=0,f=0;
    cout << "till when you need the sum "<<endl; 
   cin>>n;

    for(int i=0;i<=n;i++){
     f=f+i;
    }
         cout<<f<<endl;
        return 0;
}