#include <iostream>
using namespace std;

int main() 
{
    //pin is 1234 limit is 10000 balance is 12000
    cout << "Hello, World!"<<endl;
    int pin=0,amt =0,lim=10000,bal=12000,tpin=1234;
    cout<< "pin please"<<endl;
    cin>> pin;
    

    if (pin==tpin)
    {
        cout<< "amout you want to take"<<endl;
        cin>> amt;
        if(amt<=bal&&amt<=lim)
            cout <<"you can take it"; 
        else if(amt<=bal)      
        cout<<"insufficient amount"<<endl;
        else if(amt<=lim)      
        cout<<"cannot take more than 10000"<<endl;  
    }
    
    else
    {
        cout<<"pin wrongggg"<<endl;
    }
    return 0;
}