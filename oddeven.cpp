#include<iostream>
using namespace std;
int main()
{
    int num =18;
    int marks = 85 ;
    if (num%2==0)
    {
        cout <<"even" <<endl;
    }
    else cout<<"odd";
    if (marks>=90) cout<<"S Grade"<<endl;
    else if (marks>=80) cout<<"A Grade"<<endl;
    else if (marks>=70) cout<<"B Grade"<<endl;
    else cout<<"fail";
    return 0;
}