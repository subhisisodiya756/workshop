#include <iostream>
using namespace std;
int main() 
{
    int r=0,c=0;
    cout << "Hello, World!"<<endl; 
    cout << "enter row"<<endl;
    cin>>r;
    cout << "enter column"<<endl; 
    cin>>c;

    for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        cout << "#"; 
        
    }
    cout <<""<< endl;
    }
        return 0;
}