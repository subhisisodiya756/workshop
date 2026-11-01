#include<iostream>
using namespace std;
int main()
{
int age = 22;
int marks = 85;
//logical AND
cout << (age>=18 && age<=20)<<endl;
//logical OR
cout << (marks>=80 || marks<=90)<<endl;
//logic NOT
cout<< !(age <18)<< endl;
return 0;
}
