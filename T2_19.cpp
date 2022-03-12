/*
  FileName:T2._19.cpp
  Author:yanmengjia
  E-mail:2495253794@qq.com
  Time:Mar 11.2022
  Function:c++
 */


#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    int c;
    int d=0;
    int e=0;
    cin>>a>>b>>c;
    cout<<"Input three different integers:"<<" "<<a<<" "<<b<<" "<<c<<endl;
    cout<<"Sum is"<<" "<<a+b+c<<endl;
    cout<<"Average is"<<" "<<(a+b+c)/3<<endl;
    cout<<"Product is"<<" "<<a*b*c<<endl;
    if(a>b)
    {
        d=b;
        e=a;
    }
    else
        d=a;
        e=b;
    if(d>c)
    {
        d=c;
    }
    if(e<c)
    {
        e=c;
    }
    cout <<"Smallest is"<<" "<<d<< endl;
    cout<<"Largest is"<<" "<<e<<endl;
    return 0;
}
