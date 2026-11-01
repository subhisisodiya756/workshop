#include<iostream>
using namespace std;
int main()
{
    int age =20;
    bool hasLicense= true;
    if (age >=18)
    {
        if(hasLicense)
        {
            cout <<"you can drive leglly"<<endl;
        }
    }
    else{
            cout <<"you cannot drive leglly"<<endl;
            hasLicense=false;
        }

        cout <<hasLicense;
    return 0;
}
